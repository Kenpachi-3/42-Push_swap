*This project has been created as part of the 42 curriculum by fpresti and ntshuma.*

***

# push_swap

***

# Description
The push_swap program sorts a stack of integers using the fewest possible operations, drawn from a limited set (pa, ra, sa — push to a, rotate a, swap a, and their counterparts). Given stack a with n unsorted integers, the goal is to reach a disorder metric of 0 (a fully sorted stack), using a second stack, b, as working space along the way.

The project implements three tiers of sorting strategy — easy, medium, and hard — each suited to a different input size. The easy tier works well for small inputs; the medium tier divides the numbers into roughly √n groups; the hard tier is a more sophisticated algorithm suited to large inputs. Rather than picking one approach, the program uses the stack's disorder metric to automatically select which tier's algorithm to run.

# Instructions

### Building the Program
To build `push_swap`, type the following command in your terminal:
```bash
make
```

### Maintenance Rules
* Remove temporary binary object files (`.o` files):
```bash
  make clean
```
* Remove object files AND the final compiled `push_swap`:
```bash
  make fclean
```
* Force a complete clean rebuild of the program from scratch:
```bash
  make re
```

### Running the Program
To run `push_swap`, type the following command in your terminal:
```bash
./push_swap 3 1 2
```
As a result of running the program, a list of operations will be printed out, each on a separate line. If the stack is already sorted (has a disorder metric of 0) then there will be no output at all.

# Resources
https://www.geeksforgeeks.org/c/printf-in-c/

***
*THE END*
