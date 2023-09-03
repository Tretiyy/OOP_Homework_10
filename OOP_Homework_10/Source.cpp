#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#pragma region First
/*class WeaponInterface
{
public:
    virtual void Shoot() = 0;
    virtual void Reloading() = 0;
    virtual void ShowWeapon() = 0;
};

class Weapon : public WeaponInterface
{
protected:
    int ammoCount;
    int clipSize;
    double barrelLength;
    int damage;
public:
    Weapon(int ammoCount, int clipSize, double barrelLength, int damage)
    : ammoCount(ammoCount), clipSize(clipSize), barrelLength(barrelLength), damage(damage) {}

    virtual void Shoot() = 0;
    virtual void Reloading() = 0;
    virtual void ShowWeapon() = 0;

    int GetAmmoCount() const {
        return ammoCount;
    }
    void SetAmmoCount(int count) {
        ammoCount = count;
    }
    int GetClipSize() const {
        return clipSize;
    }
    double GetBarrelLength() const {
        return barrelLength;
    }
    int GetDamage() const {
        return damage;
    }
};

class Pistol : public Weapon 
{
public:
    Pistol() : Weapon(10, 6, 12.7, 30) {}

    void Shoot() override {
        if (ammoCount > 0) {
            cout << "Pistol shot. Damage: " << damage << endl;
            ammoCount--;
        }
        else {
            cout << "Out of ammo. Reloading." << endl;
            Reloading();
        }
    }
    void Reloading() override {
        ammoCount = clipSize;
        cout << "Pistol is reloaded." << endl;
    }
    void ShowWeapon() override {
        cout << "Pistol. Barrel length: " << barrelLength << " centimeters. Damage: " << damage << ". Ammo in clip: " << ammoCount << "/" << clipSize << endl;
    }
};

class Gun : public Weapon 
{
public:
    Gun() : Weapon(20, 10, 18.0, 50) {}

    void Shoot() override 
    {
        if (ammoCount > 0)
        {
            cout << "Gun shot. Damage: " << damage << endl;
            ammoCount--;
        }
        else 
        {
            cout << "Out of ammo. Reloading." << endl;
            Reloading();
        }
    }
    void Reloading() override
    {
        ammoCount = clipSize;
        cout << "Gun is reloaded." << endl;
    }
    void ShowWeapon() override
    {
        cout << "Gun. Barrel length: " << barrelLength << " centimetes. Damage: " << damage << ". Ammo in clip: " << ammoCount << "/" << clipSize << endl;
    }
};

class Knife : public Weapon
{
public:
    Knife() : Weapon(0, 0, 7.6, 20) {}

    void Shoot() override {
        cout << "Knife. Knife hit. Damage: " << damage << endl;
    }
    void Reloading() override {
        cout << "The knife doesn't require reloading." << endl;
    }
    void ShowWeapon() override {
        cout << "Knife. Blade length: " << barrelLength << " centimetes. Damage: " << damage << endl;
    }
};

class Machine : public Weapon
{
public:
    Machine() : Weapon(50, 30, 31.5, 40) {}

    void Shoot() override {
        if (ammoCount > 0) {
            cout << "Machine shot. Damage: " << damage << endl;
            ammoCount--;
        }
        else {
            cout << "Out of ammo. Reloading." << endl;
            Reloading();
        }
    }
    void Reloading() override {
        ammoCount = clipSize;
        cout << "Machine is reloaded." << endl;
    }
    void ShowWeapon() override {
        cout << "Machine. Barrel length: " << barrelLength << " centimeters. Damage: " << damage << ". Ammo in clip: " << ammoCount << "/" << clipSize << endl;
    }
};

class Chainsaw : public Weapon
{
public:
    Chainsaw() : Weapon(100, 50, 45.0, 60) {}

    void Shoot() override {
        if (ammoCount > 0) 
        {
            cout << "Chainsaw start-up! Damage: " << damage << endl;
            ammoCount--;
        }
        else
        {
            cout << "Out of gas. Reloading." << endl;
            Reloading();
        }
    }
    void Reloading() override 
    {
        ammoCount = clipSize;
        cout << "Chainsaw is fueled." << endl;
    }
    void ShowWeapon() override
    {
        cout << "Chainsaw. Circuit length: " << barrelLength << " centimeters. Damage: " << damage << ". Gas in tank: " << ammoCount << "/" << clipSize << endl;
    }
};*/
#pragma endregion

#pragma region Second
/*class Equation
{
public:
    virtual void solve() = 0; 
};

class LinearEquation : public Equation
{
public:
    LinearEquation(double a, double b) : a(a), b(b) {}

    void solve() override 
    {
        if (a == 0) 
        {
            if (b == 0)
                cout << "Infinitely many roots." << endl;
            else
                cout << "No roots" << endl;
        }
        else
        {
            double x = -b / a;
            cout << "One root: x = " << x << endl;
        }
    }
private:
    double a, b;
};

class QuadraticEquation : public Equation 
{
public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    void solve() override 
    {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0)
        {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two roots: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else if (discriminant == 0) 
        {
            double x = -b / (2 * a);
            cout << "One root: x = " << x << endl;
        }
        else
            cout << "No real roots." << endl;
    }
private:
    double a, b, c;
};*/
#pragma endregion

#pragma region Third
const double PI = 3.14159265358979323846;

class Shape
{
public:
    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() const override 
    {
        return length * width;
    }
private:
    double length;
    double width;
};

class Circle : public Shape
{
public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override
    {
        return PI * radius * radius;
    }
private:
    double radius;
};

class RightTriangle : public Shape
{
public:
    RightTriangle(double base, double height) : base(base), height(height) {}

    double calculateArea() const override
    {
        return 0.5 * base * height;
    }
private:
    double base;
    double height;
};

class Trapezoid : public Shape
{
public:
    Trapezoid(double a, double b, double height) : a(a), b(b), height(height) {}

    double calculateArea() const override
    {
        return (a + b) * height / 2.0;
    }
private:
    double a;
    double b;
    double height;
};
#pragma endregion

int main()
{
	// FIRST

    /*Pistol pistol;
    Gun gun;
    Knife knife;
    Machine machine;
    Chainsaw chainsaw;

    cout << "Pistol:" << endl;
    pistol.ShowWeapon();
    pistol.Shoot();
    pistol.ShowWeapon();
    pistol.Reloading();
    pistol.ShowWeapon();

    cout << "\nGun:" << endl;
    gun.ShowWeapon();
    gun.Shoot();
    gun.ShowWeapon();
    gun.Reloading();
    gun.ShowWeapon();

    cout << "\nKnife:" << endl;
    knife.ShowWeapon();
    knife.Shoot();
    knife.ShowWeapon();

    cout << "\nMachine:" << endl;
    machine.ShowWeapon();
    machine.Shoot();
    machine.ShowWeapon();
    machine.Reloading();
    machine.ShowWeapon();

    cout << "\nChainsaw:" << endl;
    chainsaw.ShowWeapon();
    chainsaw.Shoot();
    chainsaw.ShowWeapon();
    chainsaw.Reloading();
    chainsaw.ShowWeapon();*/

	// SECOND

    /*Equation* equation1 = new LinearEquation(2, -4);
    Equation* equation2 = new QuadraticEquation(1, -3, 2);

    equation1->solve();
    equation2->solve();

    delete equation1;
    delete equation2;*/

	// THIRD

    Shape* shapes[4];

    shapes[0] = new Rectangle(5, 3);
    shapes[1] = new Circle(4);
    shapes[2] = new RightTriangle(6, 8);
    shapes[3] = new Trapezoid(4, 7, 5);

    for (int i = 0; i < 4; i++)
        cout << "Figure area " << i + 1 << ": " << shapes[i]->calculateArea() << endl;

    for (int i = 0; i < 4; i++)
        delete shapes[i];

	system("pause");

	return 0;
}