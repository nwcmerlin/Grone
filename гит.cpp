#include <algorithm>
#include <iostream>
#include <vector>
//
using namespace std;
class Lambda///це клас функтор
{
public:

    void operator ()(int x) const/////
    {
        cout << x << " ";
    }
};
void Func(int& x)
{
    x += 2;
    cout << x << " ";
}

void main()
{
    //
    //
    int  age = 18;
    auto otvet = [age]()
    {
        int x = 1;
        return age + x;
    };
     
        vector<int> srcVec;
        for (int val = 0; val < 10; ++val)
        {
            srcVec.push_back(val);
        }
    
        /*vector<int>::iterator it;
        it = srcVec.begin();
        it++;*/
    
        for_each(srcVec.begin(), srcVec.end(), Func);//предикат
    
        cout << endl;
    
        for_each(srcVec.begin(), srcVec.end(), Lambda());///Lambda() це стаорення обьєкту функтора/конструктор 
        ///
        /// алгоритм for_each буде визивати operator () з класу функтора Lambda
        /// 
        cout << endl;

        cout << " kratni 3: ";
        for_each(srcVec.begin(), srcVec.end(), [](int n)//////лямбда вираз
            {

                if (n % 3 == 0)
                    cout << n << " ";
            });

        cout << endl;
        cout <<10*5<< endl;
        cout << " kratni 4: ";
        for_each(srcVec.begin(), srcVec.end(), [](int n)//////лямбда вираз
            {

                if (n % 4 == 0)
                    cout << n << " ";
            });
    //add coment
        cout << " kratni 5: ";
        for_each(srcVec.begin(), srcVec.end(), [](int n)//////лямбда вираз
            {

                if (n % 5 == 0)
                    cout << n << " ";
            });
        cout << " Parnie: ";
        for_each(srcVec.begin(), srcVec.end(), [](int n)//////лямбда вираз
            {

                if (n % 2 == 0)
                    cout << n << " ";
            });

        cout << endl;
        cout << 9/3 << endl;
        cout << double(9) / 2 << endl;
}

