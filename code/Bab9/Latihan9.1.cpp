#include <iostream>
using namespace std;

int main() {
    cout << "Gambar Linked List:\n";
    cout << "P(10) -> Q(4) -> R(5) -> S(5) -> NULL\n\n";
    
    cout << "a. Nama dan isi tiap pointer:\n";
    cout << "   P->INFO = 10\n";
    cout << "   Q->INFO = 4\n";
    cout << "   R->INFO = 5\n";
    cout << "   S->INFO = 5\n\n";
    
    cout << "b. Pointer yang bernilai sama:\n";
    cout << "   R->INFO = S->INFO (keduanya bernilai 5)\n";
    cout << "   R->LINK->LINK = S->LINK (keduanya NULL)\n\n";
    
    cout << "c. TRUE atau FALSE:\n";
    cout << "   i.   if(P->LINK == R) : FALSE\n";
    cout << "        (P->LINK menunjuk Q, bukan R)\n\n";
    
    cout << "   ii.  if(Q->LINK == R->LINK) : FALSE\n";
    cout << "        (Q->LINK menunjuk R, R->LINK menunjuk S)\n\n";
    
    cout << "   iii. if(Q->LINK->LINK == S->LINK) : TRUE\n";
    cout << "        (Q->LINK->LINK = S, S->LINK = NULL)\n\n";
    
    cout << "   iv.  if(Q == R) : FALSE\n";
    cout << "        (Q dan R adalah pointer berbeda)\n\n";
    
    cout << "   v.   if(Q->LINK == R) : TRUE\n";
    cout << "        (Q->LINK memang menunjuk ke R)\n\n";
    
    cout << "   vi.  if(R->LINK->INFO == 5) : TRUE\n";
    cout << "        (R->LINK menunjuk S, S->INFO = 5)\n\n";
    
    cout << "   vii. if(Q->INFO == 4) : TRUE\n";
    cout << "        (Q->INFO memang bernilai 4)\n";
    
    return 0;
}
