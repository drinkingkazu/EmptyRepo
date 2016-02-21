#ifndef LARLITE_PTREXAMPLE_CXX
#define LARLITE_PTREXAMPLE_CXX

#include "PtrExample.h"

namespace larlite {

  bool PtrExample::initialize() {

    std::cout << "What is the pointer address @ initialize? \033[93m" << h << "\033[00m" << std::endl;

    if(h)

      std::cout << "\033[95mI have not set anything to this pointer but it is filled?!\033[00m" << std::endl;

    return true;
  }
  
  bool PtrExample::analyze(storage_manager* storage) {

    std::cout << "What is the pointer address @ finalize? \033[93m" << h << "\033[00m" << std::endl;
  
    return true;
  }

  bool PtrExample::finalize() {

    std::cout << "What is the pointer address @ finalize? \033[93m" << h << "\033[00m" << std::endl; 

    return true;
  }

}
#endif
