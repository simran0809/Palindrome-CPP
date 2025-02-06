// Palindrome 

# include<iostream>
using namespace std;


int main(){
 // palindrome  
 // palindrome me 2 pts 1st and end initialise 
 // int i = 0; int i = var.size()-1 size ka 1 minus 

string s2 = "moonoom";
 int i = 0 ;
 int j = s2.size()-1;
 bool flag = true;

 // we will check at every place 
 while(i<=j){
     if(s2[i]!= s2[j]){
        // cout<<"Not a Palindrome"<<endl;
        // flag = false;
     //return false;
     }
       i++;
     j--; // to avoid infinite running output
     
// else{
//     cout<<"Palindrome"<<endl; 
// }
    if (flag == true){
        cout<<"Palindrome"<<endl;
    }
    
    else{
        cout<<"Not a palindrome"<<endl; 
    } // or instead of else part uncomment the flag = false and break ;
 }                                                                                                                                                                   

}