#include "matriz.h"
#include <QDebug>

int main()
{
    Matriz m;
    //Matriz m2;
    m.create(2,2);
    //m2.create(2,2);
    //m.content[0][0]= 1;
    //m.content[0][1]= 2;
    //m.content[1][0]= 3;
    //m.content[1][1]= 4;
    m.setElementAt(0,0,1);
    m.setElementAt(0,1,2);
    m.setElementAt(1,0,3);
    m.setElementAt(1,1,4);

    //m2.setElementAt(0,0,1);
    //m2.setElementAt(0,1,2);
    //m2.setElementAt(1,0,3);
    //m2.setElementAt(1,1,4);
    //double r = m.elementAt(0,0);
    //qDebug ()<< "elemento: "<< r;

    m.print();

    qDebug () << "Multiplicada por 5: " << m.multiplyBy(5);

    qDebug () << "Determintante: " << m.determinant();
    //qDebug () << m.transpose();
    return 0;
}
