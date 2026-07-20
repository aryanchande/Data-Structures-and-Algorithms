#include<iostream>
#include<vector>
using namespace std;
int main(){
    //initialzation
    // Empty vector
    vector<int> a;
    // Specified size, default value is 0
    vector<int> a1(5);      // {0, 0, 0, 0, 0}
    // Specified size and initial value
    vector<int> a2(3,-1);   //{-1,-1,-1}
    // Initializer list
    vector<int> a3 = {1, 2, 3, 4, 5};
    //2D vector:3 rows,3 columns,initialized 0
    vector<vector<int>> matrix(3,vector<int>(3,0));
    //Common vector operations
    //Append to the end
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    //size
    cout<<a.size()<<endl;
    //check if empty
    cout<<a.empty()<<endl;
    //first element
    cout<<a.front()<<endl;
    // Last element
    cout<<a.back()<<endl;
    // Access by index
    cout<<a.at(2)<<endl;
    //insert 7 at index 2
    a.insert(a.begin()+2,7);
    //remove element at index 2
    a.erase(a.begin()+2);
    //swap the contents of two vectors
    a.swap(a3);
    //remove the last element
    a.pop_back();
    //for-each loop
    for(int i:a){
        cout<<i<<endl;
    }
    return 0;
}
