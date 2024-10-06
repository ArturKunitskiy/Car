#include <iostream>
using namespace std;

class Car 
{
private:

    char* model;
    char* country;
    int year;
    double price;

public:

    Car() 
    {
        model = nullptr;
        country = nullptr;
        year = 0;
        price = 0;
    }
    Car(const char* model1, const char* country1, int year1, double price1)
    {
        model = new char[strlen(model1) + 1];
        strcpy_s(model, strlen(model1) + 1, model1);
        country = new char[strlen(country1) + 1];
        strcpy_s(country, strlen(country1) + 1, country1);
        year = year1;
        price = price1;
    }
    void SetModel(const char* model1)
    {
        if (model != nullptr)
        {
            delete[] model;
        }
        model = new char[strlen(model1) + 1];
        strcpy_s(model, strlen(model1) + 1, model1);
    }
    void SetCountry(const char* country1)
    {
        if (country != nullptr)
        {
            delete[] country;
        }
        country = new char[strlen(country1) + 1];
        strcpy_s(country, strlen(country1) + 1, country1);
    }
    void SetYear(int year1)
    {
        year = year1;
    }
    void SetPrice(double price1)
    {
        price = price1;
    }
    char* GetModel()
    {
        return model;
    }
    char* GetCountry()
    {
        return country;
    }
    int GetYear()
    {
        return year;
    }
    double GetPrice()
    {
        return price;
    }
    void Print() 
    {
        cout << "Model - " << model << endl << "Country - " << country << endl << "Year - " << year << endl << "Price - " << price << endl;
    }
    void Input() 
    {
        char buff[100];
        cout << "Input model - " << endl;
        cin >> buff;
        if (model != nullptr)
        {
            delete[] model;
        }

        model = new char[strlen(buff) + 1];
        strcpy_s(model, strlen(buff) + 1, buff);

        cout << "Input country - " << endl;
        cin >> buff;

        if (country != nullptr)
        {
            delete[] country;
        }

        country = new char[strlen(buff) + 1];
        strcpy_s(country, strlen(buff) + 1, buff);

        cout << "Input year - " << endl;
        cin >> year;
        cout << "Input price - " << endl;
        cin >> price;
        cout << endl;
    }
    ~Car() 
    {
        delete[] model;
        delete[] country;
    }
};

int main()
{
    Car Lexus("Lexus GX 460", "Japan", 2010, 31000);
    Lexus.Print();
    Lexus.SetPrice(22000);
    Lexus.Print();

    Car car;
    car.Input();
    car.Print();
    cout << car.GetModel() << endl;
}