#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(1);
    p.showlist();
    p = new int(2);
    p.showlist();
    p = new int(3);

    Pointer<int> q = new int(4);
    p.showlist();
    q = p;
    p.showlist();

    Pointer<float> pOrig = new float(5);
    pOrig.showlist();
    Pointer<float> pCopyCon = pOrig;
    pOrig.showlist();

    Pointer<float> pPoint = new float(6);
    Pointer<float> pCopy;
    pCopy = pPoint;
    pOrig.showlist();

    Pointer<float, 2> pArr = new float[2]{7,8};
    pArr.showlist();

    return 0;
}
