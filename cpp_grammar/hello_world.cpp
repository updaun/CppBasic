#include <iostream>  // 전처리 지시자
#include <vector>
#include <string>

/*
c++에서 함수를 사용하고자 한다면..?
반드시 그 함수의 원형을 미리 정의하여야 합니다.
*/

using namespace std;
// ';' 종결자의 역할을 한다.

// c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}