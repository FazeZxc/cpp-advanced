#include <memory>
#include <bits/stdc++.h>

#define SIZE 10          // c style
constexpr int size = 10; // modern cpp

struct S
{
    std::string name;
    float num;
    S(std::string s, float f) : name(s), num(f) {}
};

class widget
{
private:
    std::unique_ptr<int[]> data;

public:
    widget(const int size)
    {
        data = std::make_unique<int[]>(size);
    }
    void do_something() {}
    int weight() {}
};

void functionUsingWidget()
{
    widget w(1000000);
    w.do_something();
}

int main()
{
    std::vector<std::string> names;
    // names.push_back("Abhinav Mishra");

    std::map<std::string, std::string> color;
    // color["blue"] = "green";

    // auto comp = [](const widget &w1, const widget &w2)
    // { return w1.weight() < w2.weight(); }
    // sort( v.begin() , v.end() , comp);
    // auto i = lower_bound(v.begin(), v.end(), widget{0} , comp);

    // std::map<int , std::list<std::string>>::iterator i = m.begin(); // c style

    // auto i = m.begin(); // modern cpp

    // std::vector<int> v {1 , 2 , 3};

    // // c style
    // for(int i = 0 ; i < v.size(); ++i){
    //     std::cout << v[i];
    // }

    // // modern cpp
    // for(auto& num : v){
    //     std::cout << num;
    // }

    // // c style initialization
    // std::vector<S> v;
    // S s1("Abhinav" , 2.7);
    // S s2("Mishra", 3.5);

    // v.push_back(s1);
    // v.push_back(s2);

    // // modern c++

    // std::vector<S> v2 {s1 , s2};

    // // or

    // std::vector<S> v3{ {"Abhinav", 2.7} , {"Mishra" , 3.5}};

    // std::vector<int> v{1, 2, 3, 4, 5};
    // int x = 2;
    // int y = 4;
    // auto result = find_if(begin(v), end(v), [=](int i)
    //                       { return i > x && i < y; });

    

    return 0;
}
