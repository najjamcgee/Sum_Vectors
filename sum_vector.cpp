#include <iostream>
#include <vector>
using namespace std;
///Najja McGee
//Febuary 19th, 2024
//Due Date: Febuary 25th, 2024
//Algorithm:
//1. Create a vector header.
//2. create a empty vector.
//3. create a while loop
//4. within this while loop have a condiotion that states when the loop is empty do some action.
//5. the action will be use the empty vector made and have the user input values.
//6. with the values the user inputs within the loop use the push_back function on the vector.
//7. using the push back on the function it will then add the user input at the end on the vector/array list.
//8. display the vedctor that has been created.
//9. call the function that will return the minimum value from the vector then display it.
//10. create a sum function that will create a loop. 
//11. within the loop it will have a variable that will add to the intial value of the vector and it will return the sum at the end.
//------------------------------------------------
//function
int sum_val(vector<int> &num) {
    int sum = 0;
    for (int i = 0; i < num.size(); i++) {
        sum += num[i];
    }
    return sum;
}
//function
int minimum(vector<int> &numbers){
    int min = numbers[0];
    for(int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    return min;
}

//--------------------------------------------------
int main(){
   
    //const int SIZE = 4;

        int size = 4;
    vector<int> numbers;
   //while(numbers.empty())
   //

        cout << "Enter 4 numbers: " << endl;
        for(int i = 0; i < size; i++)
        {
            int value;
            cin >> value;
            numbers.push_back(value);
        }
        cout << "This is the vector: ";
        for(int i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
        }
        cout << "\n\nThe minimum value is: " << minimum(numbers) << endl;

        cout << "\nThe sum of the elements of the vector is: " << sum_val(numbers) << endl;
   //}
    return 0;
}
