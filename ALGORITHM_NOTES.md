1. Simple — O(n²)

What it is: Algorithms that repeatedly scan the stack to find and fix one element at a time.

Selection sort adaptation: Find the smallest (or largest) value, rotate/push it to where it belongs, repeat for the rest. Simple to reason about because you always know exactly what you're looking for.
Insertion sort adaptation: Take one element at a time and move it into its correct sorted position relative to what's already placed.
Bubble sort adaptation: Repeatedly compare neighbors and swap out-of-order pairs until nothing moves.
Simple min/max extraction: Basically selection sort's core idea — find min, move it to top of the target stack, repeat.

Easiest to choose because: the logic is a straight loop-within-a-loop — "find the target, move it, repeat." No index math, no clever bucketing. It's the most intuitive to trace by hand and debug, at the cost of being slow on large inputs (which is fine, since you only need to demonstrate the class, not optimize it).

2. Medium — O(n√n)

What it is: Algorithms that split the data into roughly √n groups so you don't have to scan the whole thing every time — a middle ground between "brute force" and "fully divide and conquer."

Chunk-based sorting: Divide the range of values into √n chunks. Move all values from the smallest chunk over first (in relative order), then the next chunk, etc.
Block-based partitioning: Similar — partition by value ranges rather than by index, process each partition/block in turn.
Bucket sort adaptation: Put elements into √n buckets by value range, sort within buckets, then reassemble.
Range-based strategies: Same family — split by numeric range and handle each range at a time.

Trade-off to know: you have to figure out a reasonable chunk size (~√n) and manage moving values between the two stacks by "which chunk does this belong to," which adds a layer of bookkeeping the simple algorithms don't have. It's a genuine step up in complexity from tier 1, but doesn't need a full recursive structure like tier 3.

3. Complex — O(n log n)

What it is: Algorithms that use divide-and-conquer or clever data structures to avoid the repeated full scans of tier 1.

Radix sort (LSD/MSD): Sort by individual bits or digits, least- or most-significant first, using the stack operations to simulate binary-based bucketing. Popular for push_swap because it avoids recursion — you can do it iteratively — while still hitting O(n log n).
Merge sort with two stacks: Classic divide-and-conquer merge, but adapted to the two-stack constraint (trickier since merge sort normally uses extra arrays, and you're limited to two stacks + defined ops).
Quick sort with stack partitioning: Partition around a pivot value, recurse on each half — conceptually easy if you already know quicksort, but implementing pivoting with only stack rotate/push operations is fiddly.
Heap sort adaptation: Build a heap structure logically and extract elements — awkward with stack-only operations since heaps are usually array/tree-based.
Binary indexed tree approaches: Overkill/unusual for this problem; mentioned as an option but rarely the practical choice.

Trade-off to know: best asymptotic performance, but the hardest to actually implement under the operation constraints. Radix sort tends to be the most commonly chosen here because its logic ("route each number left or right based on one bit, repeat for every bit") maps onto stack rotations more naturally than merge/quick/heap sort do.