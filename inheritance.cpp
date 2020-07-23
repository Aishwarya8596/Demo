#include<iostream>
/* Single level inheritance*/
/*class Stu
{
    int id;
    char name[10];
    public:
    void getstu()
    {
        std::cout<<"enter student id and name"<<std::endl;
        std::cin>>id>>name;
    }
    void putstu()
    {
        std::cout<<"Id = "<<id<<std::endl;
        std::cout<<"Name = "<<name<<std::endl;
    }
};
class Data : public Stu
{
    private:
    float h,w;
    public:
    void getData()
    {
        std::cout<<"enter student height and weight"<<std::endl;
        std::cin>>h>>w;
    }
    void putData()
    {
        std::cout<<"Height = "<<h<<std::endl;
        std::cout<<"Weight = "<<w<<std::endl;
    }

};
int main()
{
    Data d;
    d.getstu();
    d.getData();
    d.putstu();
    d.putData();
}*/

/* if we declare private derivation mode for derived class, then getstu() & putstu can not be directly accessed by the main()*/
/*It can be accessed by the public member () of the same class*/
/*cannot cast 'Data' to its private base class 'Stu' - in the function calling from main*/
/*class Stu
{
    int id;
    char name[10];
    public:
    void getstu()
    {
        std::cout<<"enter student id and name"<<std::endl;
        std::cin>>id>>name;
    }
    void putstu()
    {
        std::cout<<"Id = "<<id<<std::endl;
        std::cout<<"Name = "<<name<<std::endl;
    }
};

class Data : private Stu 
{
    private:
    float h,w;
    public:
    void getData()
    {
        getstu();
        std::cout<<"enter student height and weight"<<std::endl;
        std::cin>>h>>w;
    }
    void putData()
    {
        putstu();
        std::cout<<"Height = "<<h<<std::endl;
        std::cout<<"Weight = "<<w<<std::endl;
    }

};
int main()
{
    Data d;
    d.getData();
    d.putData();
}*/


/*Multiple inheritance*/
/*class Stu
{
    int id;
    char name[10];
    public:
    void getstu()
    {
        std::cout<<"enter student id and name"<<std::endl;
        std::cin>>id>>name;
    }
    void putstu()
    {
        std::cout<<"Id = "<<id<<std::endl;
        std::cout<<"Name = "<<name<<std::endl;
    }
};
class Mark
{
    protected:
    int m1,m2,m3; //if we declared this as private, it will not directly access in Result class
    public:
    void getMark()
    {
        std::cout<<"enter students mark"<<std::endl;
        std::cin>>m1>>m2>>m3;
    }
    void putMark()
    {
        std::cout<<"Marks are="<<m1<<","<<m2<<","<<m3<<std::endl;
    }
};
class Result : public Stu, public Mark //Multiple inheritance
{
    float tot, avg;
    public:
    void show()
    {
        tot = m1+m2+m3;
        avg = tot/3.0;
        std::cout<<"Total= "<<tot<<std::endl;
        std::cout<<"Average= "<<avg<<std::endl;
    }
};
int main()
{
    Result x;
    x.getstu();
    x.getMark();
    x.putstu();
    x.putMark();
    x.show();
}*/

/* Multilevel Inheritance*/
/*class Stu
{
    int id;
    char name[10];
    public:
    void getstu()
    {
        std::cout<<"enter student id and name"<<std::endl;
        std::cin>>id>>name;
    }
    void putstu()
    {
        std::cout<<"Id = "<<id<<std::endl;
        std::cout<<"Name = "<<name<<std::endl;
    }
};
class Mark : public Stu
{
    protected:
    int m1,m2,m3;
    public:
    void getMark()
    {
        std::cout<<"enter students mark"<<std::endl;
        std::cin>>m1>>m2>>m3;
    }
    void putMark()
    {
        std::cout<<"Marks are="<<m1<<","<<m2<<","<<m3<<std::endl;
    }
};
class Result : public Mark
{
    float tot, avg;
    public:
    void show()
    {
        tot = m1+m2+m3;
        avg = tot/3.0;
        std::cout<<"Total= "<<tot<<std::endl;
        std::cout<<"Average= "<<avg<<std::endl;
    }
};
int main()
{
    Result x;
    x.getstu();
    x.getMark();
    x.putstu();
    x.putMark();
    x.show();
}*/

//Hirerchical Inheritance
/*class Bank
{
    int acno;
    char name[10];
    public:
    void getBank()
    {
        std::cout<<"enter Account holder no and name"<<std::endl;
        std::cin>>acno>>name;
    }
    void putBank()
    {
        std::cout<<"Account no="<<acno<<std::endl;
        std::cout<<"Name = "<<name<<std::endl;
    }
};
class SavingAC : public Bank
{
    float bal;
    public:
    void getbal()
    {
        std::cout<<"enter Account balance"<<std::endl;
        std::cin>>bal;
        if(bal < 500)
        std::cout<<"Minimum balance requirement is 500"<<std::endl;
        else
        std::cout<<"Account created"<<std::endl;
    }
};
class CurrentAC : public Bank 
{
    float bal;
    public:
    void getbal()
    {
        std::cout<<"enter Account balance"<<std::endl;
        std::cin>>bal;
        if(bal < 1000)
        std::cout<<"Minimum balance requirement is 1000"<<std::endl;
        else
        std::cout<<"Account created"<<std::endl;
    }
};
int main()
{
    int option;
    std::cout<<"Option 1= SavingAC"<<std::endl;
    std::cout<<"Option 2= CurrentAC"<<std::endl;
    std::cout<<"enter your option"<<std::endl;
    std::cin>>option;
    if(option == 1)
    {
        SavingAC s;
        s.getBank();
        s.getbal();
        s.putBank();
    }
    else if(option == 2)
     {
        CurrentAC a;
        a.getBank();
        a.getbal();
        a.putBank();
     }
     else
     std::cout<<"invalid option"<<std::endl;
     
}*/

//Hybrid inheritance
/*class Stu
{
    int id;
    char name[10];
    public:
    void getStu()
    {
        std::cout<<"enter student id and name"<<std::endl;
        std::cin>>id>>name;
    }
};
class Mark : public Stu
{
    protected:
    int m,p,c;
    public:
    void getMark()
    {
        std::cout<<"enter marks"<<std::endl;
        std::cin>>m>>p>>c;
    }
};
class Sportmark
{
    protected:
    int spm;
    public:
    void getspm()
    {
        std::cout<<"enter mark"<<std::endl;
        std::cin>>spm;
    }
};
class Result : public Mark, public Sportmark
{
    float tot,avg;
    public:
    void show()
    {
        tot=m+p+c+spm;
        avg=tot/4.0;
        std::cout<<"Result ="<<tot<<std::endl;
        std::cout<<"Average ="<<avg<<std::endl;
    }
};
int main()
{
    Result r;
    r.getStu();
    r.getMark();
    r.getspm();
    r.show();

}*/

//default constructors in inheritance
/*class base
{
    public:
    base()
    {
        std::cout<<"Base class constructor invoked 1st"<<std::endl;
    }
};
class der : public base
{
    public:
    der()
    {
        std::cout<<"Derived class constructor invoked 2nd";
    }
};
int main()
{
    der d;

}*/

//Destructor in inheritance
/*class base
{
    public:
    ~base()
    {
        std::cout<<"base class destructor invoked 2nd, after the derived class"<<std::endl;
    }
};
class der : public base
{
    public:
    ~ der()
    {
        std::cout<<"derived class destructor invoked 1st"<<std::endl;
    }
    
};
int main()
{
    der d;
}*/

//write the parameterized constructor's program

//virtual class concept  //error:c1fun' found in multiple base-class subobjects of type 'c1'
class c1
{
    public:
    void c1fun()
    {
        std::cout<<"c1 fun executed"<<std::endl;
    }
};
class c2 : public  virtual c1 
{ 
    public:
    void c2fun()
    {
        std::cout<<"c2 fun executed"<<std::endl;
    }

};
class c3 : public virtual c1 
{ 
    public:
    void c3fun()
    {
        std::cout<<"c3 fun executed"<<std::endl;
    }

};
class c4 : public c2, public c3
{ 
    public:
    void c4fun()
    {
        std::cout<<"c4 fun executed"<<std::endl;
    }

};
int main()
{
    c4 obj;
    obj.c1fun();
    obj.c2fun();
    obj.c3fun();
    obj.c4fun();
}