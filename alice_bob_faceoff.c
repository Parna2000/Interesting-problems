/* Alice and Bob have got an integer N. They decide to play a game. Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. The game continues until N becomes 0. The player who is unable to make a move loses.

During each turn a player can make one of the following moves:

Choose an integer X such that X can be expressed as 2Y, Y≥1. The chosen X must also be a factor of N. After choosing an integer X which satisfies the mentioned criteria, the player will divide N by X.

If Move 1 is not possible , the player will subtract 1 from N.

Predict the winner of the game if the game is played optimally by both the players.

Input Format
The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains an integer N.

Output Format
For each test case, print "Alice" if Alice wins the game else print "Bob". Print the output without quotes.

Constraints
1≤T≤2∗105
1≤N≤1018
Subtasks
10 points : 1≤N≤20 , 1≤T≤20
30 points : 1≤N≤105, 1≤T≤105
60 points : 1≤N≤1018
Sample Input 1 
2
1
2
Sample Output 1 
Alice
Bob
Explanation
Test case 1: Alice can't perform the first move, hence she subtracts 1 from N and N becomes 0. Bob can't make a move now.

Test case 1: Alice first divides N by 2 , after which N becomes 1. Bob, in the next move decrements N by 1 after which N becomes 0 and Alice loses. */
#include<stdio.h>
#include<stdlib.h>

int win(int n){
    if(n==0){
        return 0;
    }
    else if(n%2==1){
        return !win(n-1);
    }
    else if(n%4!=0){
        return !win(n/2);
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        if(win(n)){
            printf("Alice\n");
        }
        else{
            printf("Bob\n");
        }
        return 0;
    }
}