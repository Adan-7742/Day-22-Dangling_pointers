//=======================================================================================================
//                                                                                                      =
//............................Dangling Pointers.........................................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
using namespace std;

// Dangling pointers :  which is used to represent non existing memory location
/*
   
   int* ptr;
   ptr = new int;


   delete ptr;    // here we deallocate the memory of pointer

   // the thing we have to understand here is that when we release the memory and 
   // the pointer still pointing toward the memory location so that pointer is known as dangling pointer

   // .............How we can overcome this........................

   // so we can over come this as we as to equal the pointer to the nulptr 
   // after deleting it

   ptr = nulptr;          // it is not intilizing to anthing now

   // now that pointer is not known as dangling pointer
   //here we reinitilized it

   //.................................................................
   //               Example
   //.................................................................

   int fun(){
              
        int num =10;   // as long as this function is working it have that life time 
                       // after that it will vanish or its life time ends

        return &num;    // here we are trying to return the adress of non existing memory
    
    }

    // we are trying to give the adress of num to the pointer

    int main(){

    int* ptr = nulptr;     // here we intiize a pointer to the value noting
                           // here we store the adress in this pointer now this ptr is known as dangling pointer

    ptr=fun();            // here we are calling the function

    cout<<*ptr;   // here we are derefrencing it now it wil cause Segmentation fault


    //  Segmentation fault : you are trying to write on ilegal memory location here


    }
 */
 


//==================================================================================
//             Kinds Of Dangling Pointers
//==================================================================================

 
//    1 .  Uninitilized pointers

//    2 .  Deleted pointers
 
//    3 .  Multiple pointers pointing to the same memory location



//......................................
//  Non initilized pointer
//......................................

/*

   int* ptr;   // here we decleare a pointer here not initilize it
               // it is now dangling pointer

   cout<<ptr<<endl;

   cout<<*ptr<<endl;  // it will crash

   */


   //......................................
   //  Deleted pointer
   //......................................


   /*
   
   int ptr = {new int{77}};

   cout<<"Before Deleting"<<*ptr<<endl;

   delete ptr;

   cout<<"After Deleting"<<*ptr<<endl;  

   // dont use it before we properly initilize it again other wise it will crash the program
   */


   //...........................................
   //  Multiple pointers pointing to same address
   //...............................................


/*
      
            int *p_number3 (new int(83));

            int *p_number4 (p_number3);

            cout << p_number3 << endl;
            cout << p_number4 << endl;
           
            cout<< *p number3 << endl;
            cout<< *p_number4 <<endl;

            //Deleting p_numben3

            delete p_number3;

            //p_number1 points to deleted memory. Deneferncing it uill lead to
            //undefined behaviour : crash/"garbage orfwhateVer

           cout<< "p_number4(after deleting, p_nmber3) - ""<< p_number4<<endl;

            cout<< *p_number4; 




*/

//==================================================================================
//             Solution to Dangling Pointers
//==================================================================================



//    1 .  Intilize your pointer

//    2 .  reset your pointer after deleting it

//    3 .  for multiple pointer to same adress make sure the owner pointer is very clear


 int main()
{
  
}

