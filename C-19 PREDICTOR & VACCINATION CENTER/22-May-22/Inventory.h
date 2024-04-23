#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
    char name[6];
    int id, quantity;

public:
    Inventory();
    Inventory(int id, char name, int quantity);
    char getname();
    int getid();
    int getquantity();
    void getData(void);
    void Choice();
//
//    void showData(void)
//        {
//        	cout<<"\n\tNAME: "<<name<<"\n\tID: "<<id<<"\n\tQUANTITY: "<<quantity<<endl;
//        }  
};

#endif
