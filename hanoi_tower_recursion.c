#include <stdio.h>
// to count the number of steps
int steps = 0;
// Function to solve Tower of Hanoi problem and count steps
void hanoi(int n,char source,char aux,char des) {
    // Base case: If only 1 disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source, des);
        steps++;  // Increment step count
        return;
    }
    // Step 1: Move n-1 disks from source to auxiliary using destination as auxiliary
    hanoi(n - 1, source, des, aux);
    // Step 2: Move the nth (largest) disk from source to destination
    printf("Move disk %d from rod %c to rod %c\n", n, source, des);
    steps++;  // Increment step count
    // Step 3: Move n-1 disks from auxiliary to destination using source as auxiliary
    hanoi(n - 1, aux, source, des);
}
int main() {
    int n;
	// Number of disks
	printf("Enter number of disks: ");
	scanf("%d",&n);
	printf("To solve: \n");
    hanoi(n, 'A', 'B', 'C');  // A, B, C are rods
    printf("Total number of steps: %d\n", steps);  // Output the total number of steps
    return 0;
}
