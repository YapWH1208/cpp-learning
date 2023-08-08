# include <iostream>
using namespace std;

int main(){
    int num = 100;
    do{
         int temp = num;
         int total = 0;

         while(temp > 0){
             int digit = temp % 10;
             temp /= 10;
             total += digit * digit * digit;
         }
         if(total == num){
             cout << num << endl;
         }
         num++;
     }while(num < 1000);

    system("Pause");
    return 0;
}