//
//  StateController.hpp
//
//  Created by Coralie on 01/03/2018.
//
//

#ifndef StateController_h
#define StateController_h

class StateController;

// ==================================================================== INCLUDE
#include <stdio.h>
#include "State.h"

// --------------------------------------------------------------------- Struct
// ---------------------------------------------------------------------- const

class StateController {
protected: //======================================================== PROTECTED
  // -------------------------------------------------------------------- const
  // --------------------------------------------------------------- attributes
  State* currentState = nullptr;
  State* states[STATE_NAME_COUNT];
  // ----------------------------------------------------------------- methodes
  // END PROTECTED
public: //============================================================== PUBLIC
  // -------------------------------------------------------------- Constuctors
  StateController();
  // ----------------------------------------------------------------- Methodes
  void changeState(StateName name);
  void cLoop();
  // ------------------------------------------------------- Getteurs/Sertteurs
  // ---------------------------------------------------------------- Destuctor
  virtual ~StateController();
  // END PUBLIC


};


#endif /* StateController_h */
