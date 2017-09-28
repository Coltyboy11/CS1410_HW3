#include <iostream>
using namespace std;
class Date{
    private:
    int month;
    int day;
    int year;
    char tempchar;
    public:
    void get_date(){
        cin>>month>>tempchar>>day>>tempchar>>year;
    }
    void show_date(){
        cout<< month<<"/"<<day<<"/"<<year<<endl;
    }
};
int main() {
    Date d1;
    Date d2;
    cout << "Please enter a date.(format: 12/25/1995)"<<endl;
    d1.get_date();
    cout << "Please enter another date.(format: 12/25/1995)"<<endl;
    d2.get_date();
    cout << "Date 1 = ";
    d1.show_date();
    cout << "Date 2 = ";
    d2.show_date();
    return 0;
}
/*
int get_date(){

    cout << "Please enter a date (format 12/25/1955): ";
    cin >>month>>tempchar>>day>>tempchar>>year;
    return month,day,year;

}
*/
