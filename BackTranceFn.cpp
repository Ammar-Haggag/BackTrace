#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> stringArray = {"","","",""}; // aray for string

class BackTrace
{   private:
    std::string name;

    public:
    BackTrace(std::string name) : name(name)
    {
        std::cout<<"Enter >>> "<<name<<std::endl;

        // insert string in array
        std::string stringVariable = name;
        for (int i = 0; i < stringArray.size(); i++)
         {
        if (stringArray[i].empty()) 
        {
            // Insert the string variable at the empty index
            stringArray[i] = stringVariable;
            break;
        }
    }


       
    }
    ~BackTrace()
    {   
       std::cout<<"Exit <<< "<<name<<std::endl;
    }


};
//decleration fn
void fn2(char); 
void fn3 (float );
void print();

void fn1( int x , int y) 
{
    BackTrace b(__PRETTY_FUNCTION__); 
    fn2('c');
}
void fn2( char c) 
{
    BackTrace BackTrace(__PRETTY_FUNCTION__);
    fn3(1);
    }
void fn3(float f)
 {
    BackTrace BackTrace(__PRETTY_FUNCTION__);
    print();
 }
 void print()
 {
    std::cout<<"----------------------"<<std::endl;
    std::cout<<"Backtrace as follows: "<<std::endl;
    std::cout<<"----------------------"<<std::endl;
    int i=0; // for index
    for (const std::string& str : stringArray)  // print array
    {
        std::cout <<i<<"- "<< str << " "<<std::endl;
        i++;
    }
    std::cout<<"----------------------"<<std::endl;
    
 }



int main()
{
    BackTrace b(__PRETTY_FUNCTION__); // for main fn
    fn1(2,3);
    return 0;
}