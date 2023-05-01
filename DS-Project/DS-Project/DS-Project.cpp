#include <iostream>
using namespace std;
#include "admin.h"
#include "news.h"
int main()
{

    admin a = admin();
    a.postNews();
    a.displayNews();
    a.updateNews();
    a.displayNews();

    //a.removeNews();
    //a.displayNews();
}

