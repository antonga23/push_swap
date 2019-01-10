# push_swap
  
<img width="940" alt="screen shot 2018-09-12 at 10 19 50" src="https://user-images.githubusercontent.com/36439765/45412002-fd2fd780-b675-11e8-9a6e-b7ce36b8e939.png">

Because Swap_push isn’t as natural

  Summary:
This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various types of 
algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

| instructions  | Description   |
|:-------------:|---------------|
| sa            | swap first two elements of stack A |
| sb            | swap first two elements of stack B |
| ss            | sa and sb at the same time |
| pa            | pops the first elememt on B and puts it on top of A |
| pb            | pops the first elememt on A and puts it on top of B |
| ra            | rotates stuck A up by one|
| rb            | rotates stuck B up by one |
| rr            | rotates both A and B up by one |
| rra           | rotates stuck A down by one |
| rrb           | rotates stuck B down by one |
| rrr           | rotates both A and B down by one |


## How to run the program:
1) make   
2) ARG="random numbers"; /.push_swap $ARG                      // prints all the instructions   
3) ARG="random numbers"; ./push_swap $ARG | wc -l              // prints the count of all the intructions    
4) ARG="random numbers"; ./push_swap $ARG | ./checker $ARG 	 // prints [OK] if all the numbers are proprely sorted  
