#include<iostream>
using namespace std;

int numberOfSteps(int num) {
        int steps = 0;
        
        while(num > 0){
            if(num % 2 == 0){
                num = num / 2;
                cout << num << endl;
                steps++;
                
            }
            else{
                num = num - 1;
                cout << num << endl;
                steps++;
            }
       }
   return steps;
}

int main(){
	cout << "Steps are: "<<numberOfSteps(14) <<endl;
}
