// 这是为K宝设计的语言
// 源自C++

#include <string>
#include <time.h>

// 姓名
struct name
{
    std::string first;
    std::string mid;
    std::string last;
};

// 日期
struct date
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

// 地点
struct place
{
    std::string province;
    std::string county;
    std::string nation;
};

// 性别
enum gender
{
    Male,
    MtF,
    MtX,

    Female,
    FtM,
    FtX,
};
class Person
{
public:
    struct name personName;
    struct date birthday;
    struct place birthPlace;
    struct place location;
    unsigned int age = 0;

    enum gender sexualOrientation;
    enum gender gender;

    void makeData(int &age);
};

void Person::makeData(int &age)
{
    time_t now = time(NULL);
    tm *year = localtime(&now);

    age -= (year->tm_year + 1900);
}
