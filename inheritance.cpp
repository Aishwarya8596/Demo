//virtual class concept  //error:c1fun' found in multiple base-class subobjects of type 'c1'
#include<iostream>
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
