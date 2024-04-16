#include<iostream>
using namespace std;
int main(){
int i,n;
int a[9];     
cout<<"Enter the elements in array :"<<endl; 
for(i=0; i<9; i++){
cin>>a[i];                                       
}
int low = 0;
int high = 9-1;
int mid = (low+high)/2;                      
cout<<"Enter the element to be searched:"; cin>>n;
for(i=0; i<9; i++){
if (n == mid) {                      
cout<<"Element found !";
break;           
}
if(n > mid) {
low = mid+1;  }
if (n < mid) {
high = mid-1;  }
mid = (low+high)/2;             
}
if(i == 9)
cout<<"\nElement not found!";               
}
/*/*svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~$ cd pavanraj43.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/Pavanraj43.cpp$ g++ quick.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/Pavanraj43.cpp$ ./a.out
Enter the elements in array :
1 2 3 4 5 6 7 8 9
Enter the element to be searched:4
Element found !
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/Pavanraj43.cpp$ 

*/

