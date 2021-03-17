#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;
void printVin() {
    cout << "==================" << endl;
    cout << "======������!=====" << endl;
    cout << "==================" << endl;
}
void printLose() {
    cout << "==================" << endl;
    cout << "~~~���������...~~~" << endl;
    cout << "==================" << endl;
}
class Arena {
protected:
    int attackPower;
public:
    void setAttackPower(int a) {
        attackPower = a;
    }
};
class Hero : public Arena {
public:
    void attack() {
        cout << "����� ����� - " << attackPower << endl;
    }
};
class Enemy : public Arena {
public:
    void attack() {
        cout << "����� ����� - " << attackPower << endl;
    }
};
class BaseXaracted
{
public:
    BaseXaracted(int s, int z, int l, int i, int o, int lev, int mg, int ol, int def, int mon)
        :sila(s), zdorovie(z), lovcosti(l), intelect(i), opytnow(o), level(lev), magical(mg), opytlevel(ol), defend(def), moune(mon)
    {
    }
    void printDate()
    {
        cout << " �������: " << level << endl;
        cout << opytnow << "/" << opytlevel << endl;
        cout << "���� =" << sila << endl;
        cout << "��������: " << zdorovie << "HP" << endl;
        cout << "�������� = " << lovcosti << endl;
        cout << "��������� = " << intelect << endl;
        cout << "���������� ���� = " << magical << endl;
        cout << "������ = " << defend << endl;
        cout << moune << " ������" << endl;
    }
private:
    int sila;
    int zdorovie;
    int lovcosti;
    int intelect;
    int opytnow;
    int level;
    int magical;
    int opytlevel;
    int defend;
    int moune;
};
class Player
{
public:
    Player(string n, string c, BaseXaracted b)
        : name(n),
        clas(c),
        bxd(b)
    {
    }
    void printInfo()
    {
        cout << name << endl;
        cout << "(" << clas << ")" << endl;
        cout << "---------------------" << endl;
        bxd.printDate();
        cout << "---------------------" << endl;
    }
private:
    string name;
    string clas;
    BaseXaracted bxd;
};


class myClass {
public:
    myClass(string nm) {
        setName(nm);
    }
    void setName(string x) {
        name = x;
    }
    string getName() {
        return name;
    }
private:
    string name;
};
int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    Hero h;
    Enemy en;
    Arena* e1 = &h;
    Arena* e2 = &en;
    int sila = 150, zdorovie = 15000, lovcosti = 200, intelect = 500, opytnow = 0, level = 1, magical = 0, opytlevel = 100, defend = 100;
    int sila_e = 80, zdorovie_e = 18000, lovcosti_e = 250, intelect_e = 600, level_e = 1, magical_e = 0, defend_e = 150, moune = 500, zdorovie_n
        , zdorovie_en;
    string x, c;
    string Enemy_1, Enemy_2, Enemy_3;
    int y, r, f, cl, hit, cikl;
    int ht1, ht2, ht3, ht4, ht5, ht6, ht7, ht8, ht9, ht10, hl, enem1, enem2, enem3;
    string hit_1, hit_2, hit_3, hit_4, hit_5, hit_6, hit_7, hit_8, hit_9, hit_10, hill;
    cout << "����������� ����! � - ��� ���� ����. ���������� ������ ������ �� ������� � �� ������, � �� ������ ��������. �� ����� � ����������� ��� - ��� ��� ��������� ����. ���� ��� ����� ���������� � ��� ����� ���� �����. �����, ��� � ���� � ���� ����������?" << endl;
    cout << "��� ������ �����:";
    cin >> x;
    myClass ob1(x);
    myClass ob2("������� ���");
    cout << "������ ����� ������ �����:" << endl << "1)����" << endl << "2)������" << endl << "3)���" << endl;
    cin >> cl;
    if (cl == 1)
    {
        c = "����";
        sila += 50;
        zdorovie += 200;
        intelect += 50;
        lovcosti += 50;
        defend += 200;
        hit_1 = "���x ����";
        hit_2 = "���������� ������";
        hit_3 = "���������� ������";
        hit_4 = "����������";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    if (cl == 2)
    {
        c = "������";
        sila += 30;
        zdorovie += 500;
        intelect += 30;
        lovcosti += 150;
        defend += 150;
        hit_1 = "������";
        hit_2 = "�������� ������";
        hit_3 = "������� �����";
        hit_4 = "�������� ������";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    if (cl == 3)
    {
        c = "���";
        sila += 35;
        zdorovie += 300;
        intelect += 100;
        magical += 200;
        defend += 180;
        hit_1 = "��������������";
        hit_2 = "�������� ������";
        hit_3 = "����-���";
        hit_4 = "����������� �����";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    cout << "������. ������, � ������ ���� ��������������: " << endl;
    BaseXaracted bxd(sila, zdorovie, lovcosti, intelect, opytnow, level, magical, opytlevel, defend, moune);
    Player p(x, c, bxd);
    p.printInfo();
    cout << " ������ �� ������ �����������. ��������� ����������� ����. ����� ��������� ���� ����������� �� �����." << endl;
    cout << "������ �������� ���a!" << endl;
    cout << endl;
    cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
    cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
    zdorovie_n = zdorovie;
    zdorovie_en = zdorovie_e;
    while (zdorovie_e > 0)
    {
        hit = 0;
        r = rand() % sila_e;
        cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << hit_3 << endl;
        cin >> f;
        if (f == 1)
        {
            hit = 2 * sila;
            hit -= (lovcosti_e * 0.1);
            hit += (magical * 0.1);
        };
        if (f == 2)
        {
            hit = sila;
            hit += (intelect * 0.5);
            hit -= (lovcosti_e * 0.1);
            hit += (magical * 0.2);
        };
        if (f == 3)
        {
            hit = sila * 2;
            hit += (intelect * 0.5);
            hit += (magical * 0.5);
            hit -= defend_e;
        }
        zdorovie_e -= hit;
        zdorovie -= sila_e + r;
        e1->setAttackPower(hit);
        e2->setAttackPower(sila_e + r);
        h.attack();
        cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
        en.attack();
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << endl << endl;
        if (zdorovie <= 0) {
            zdorovie_e = 0;
        }
    }
    if (zdorovie <= 0) {
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << endl;
        opytnow += 10;
        moune += 50;
        printLose();
        cout << "��� ����, ��� ���� ����. ��� ���� �� �������. �� ���� ��� ������� " << ob1.getName() << "... " << endl;
    }
    else {
        cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
        cout << endl;
        opytnow += 30;
        moune += 100;
        printVin();
        cout << "��� ������������, � ������� " << ob1.getName() << "! �� �������� �������. ������, ���� ���� - �������� ��� ����������� �� ������ � ���������. �����!" << endl;
    }
    cout << endl << ob1.getName() << endl;
    cout << " �������: " << level << endl;
    cout << opytnow << "/" << opytlevel << endl;
    cout << moune << " ������" << endl;
    cout << endl << endl;
    zdorovie = zdorovie_n;
    myClass ob3("������ ���������");
    zdorovie_e = zdorovie_en;
    while (level <= 10)
    {
        zdorovie_en = zdorovie_e;
        zdorovie_n = zdorovie;
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
        while (zdorovie_e > 0)
        {
            hit = 0;
            r = rand() % sila_e;
            cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << hit_3 << endl;
            cin >> f;
            if (f == 1)
            {
                hit = 2 * sila;
                hit -= (lovcosti_e * 0.1);
                hit += (magical * 0.1);
            };
            if (f == 2)
            {
                hit = sila;
                hit += (intelect * 0.5);
                hit -= (lovcosti_e * 0.1);
                hit += (magical * 0.2);
            };
            if (f == 3)
            {
                hit = sila * 2;
                hit += (intelect * 0.5);
                hit += (magical * 0.5);
                hit -= defend_e;
            }
            zdorovie_e -= hit;
            zdorovie -= sila_e + (r * (level * 1, 2));
            e1->setAttackPower(hit);
            e2->setAttackPower(sila_e + r);
            h.attack();
            for (int cikl = 0; cikl >= 10000; cikl++)
            {
            }
            cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
            en.attack();
            cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
            cout << endl << endl;
            if (zdorovie <= 0) {
                zdorovie_e = 0;
            }
        }
        if (zdorovie <= 0) {
            cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
            cout << endl;
            opytnow += 10 * (level * 1.1);
            moune += 50 * (level * 1.1);
            printLose();
        }
        else {
            cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
            cout << endl;
            opytnow += 30 * (level * 1.2);
            moune += 100 * (level * 1.1);
            printVin();
        }
        zdorovie = zdorovie_n;
        zdorovie_e = zdorovie_en;
        if (opytnow > opytlevel)
        {
            opytnow = opytlevel - opytnow;
            opytnow = opytnow - opytnow - opytnow;
            cout << "����� �������!" << endl;
            opytlevel += (opytlevel * 1.2);
            level += 1;
            sila += (sila * 1.2);
            zdorovie += (zdorovie * 1.2);
            lovcosti += (lovcosti * 1.3);
            intelect += (intelect * 1.1);
            magical += (magical * 1.6);
            defend += (defend * 1.5);
            moune += 1000;
            sila_e += (sila_e * 1.4);
            zdorovie_e += (zdorovie_e * 1.3);
            BaseXaracted bxd(sila, zdorovie, lovcosti, intelect, opytnow, level, magical, opytlevel, defend, moune);
            Player p(x, c, bxd);
            p.printInfo();
        }
        else
        {
            cout << endl << ob1.getName() << endl;
            cout << " �������: " << level << endl;
            cout << opytnow << "/" << opytlevel << endl;
            cout << moune << " ������" << endl;
            cout << endl << endl;
        }
    };
    cout << "����� ������ ��������� :" << clock() / 1000000.0 << " ������." << endl;
    cout << "������� return";
    return 0;
}