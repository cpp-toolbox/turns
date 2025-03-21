#ifndef TURNS_HPP
#define TURNS_HPP

// NOTE: Turns are a way of measuring angles in way where we don't have to care about arbitrary constants when we talk
// about a single turn, when we're working in degrees that arbitrary choice was 360, and when we're working in radians
// that value is pi, but the only way we attach meaning to those values is that they map back to one turn around the
// circle, so why not just cut out the middle man and work with turns directly?

namespace turns {

// NOTE: go to the bottom of the file for visualizations.
extern const double one_sixth_turn;
extern const double one_third_turn;
extern const double one_half_turn;
extern const double two_thirds_turn;
extern const double five_sixths_turn;
extern const double one_eighth_turn;
extern const double three_eighths_turn;
extern const double five_eighths_turn;
extern const double seven_eighths_turn;
extern const double one_quarter_turn;
extern const double three_quarters_turn;
extern const double full_turn;

constexpr double PI = 3.141592653589793;

constexpr double turns_to_radians(double turns) { return turns * 2.0 * PI; }
constexpr double radians_to_turns(double radians) { return radians / (2.0 * PI); }
constexpr double turns_to_degrees(double turns) { return turns * 360.0; }
constexpr double degrees_to_turns(double degrees) { return degrees / 360.0; }

}; // namespace turns

/*
                   ooo OOO OOO ooo
               oOO                 OOo
           oOO                         OOo
        oOO                               OOo
      oOO                                   OOo
    oOO                                       OOo
   oOO                                         OOo
  oOO                                           OOo
 oOO                                             OOo
 oOO                                             OOo
 oOO                                             OOo
 oOO                                             OOo
 oOO                                             OOo
  oOO                                           OOo
   oOO                                         OOo
    oOO                                       OOo
      oOO                                   OOo
        oO                                OOo
           oOO                         OOo
               oOO                 OOo
                   ooo OOO OOO ooo
*/

/* THIRDS
                   ooo OOO OOO ooo
               oOO                 OOo
           oOO    X                    OOo
        oOO        X                      OOo
      oOO           X                       OOo
    oOO              X                        OOo
   oOO                X                        OOo
  oOO                  X                        OOo
 oOO                    X                        OOo
 oOO                     X                       OOo
 oOO                      XXXXXXXXXXXXXXXXXXXXXXXOOo
 oOO                     X                       OOo
 oOO                    X                        OOo
  oOO                  X                        OOo
   oOO                X                        OOo
    oOO              X                        OOo
      oOO           X                       OOo
        oOO        X                      OOo
           oOO    X                    OOo
               oOO                 OOo
                   ooo OOO OOO ooo
*/

/* SIXTHS
                   ooo OOO OOO ooo
               oOO                 OOo
           oOO    X               X    OOo
        oOO        X             X        OOo
      oOO           X           X           OOo
    oOO              X         X              OOo
   oOO                X       X                OOo
  oOO                  X     X                  OOo
 oOO                    X   X                    OOo
 oOO                     X X                     OOo
 oOOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOOo
 oOO                     X X                     OOo
 oOO                    X   X                    OOo
  oOO                  X     X                  OOo
   oOO                X       X                OOo
    oOO              X         X              OOo
      oOO           X           X           OOo
        oOO        X             X        OOo
           oOO    X               X    OOo
               oOO                 OOo
                   ooo OOO OOO ooo
*/

/* QUARTERS
                   ooo OOO OOO ooo
               oOO        X        OOo
           oOO            X            OOo
        oOO               X               OOo
      oOO                 X                 OOo
    oOO                   X                   OOo
   oOO                    X                    OOo
  oOO                     X                     OOo
 oOO                      X                      OOo
 oOO                      X                      OOo
 oOOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOOo
 oOO                      X                      OOo
 oOO                      X                      OOo
  oOO                     X                     OOo
   oOO                    X                    OOo
    oOO                   X                   OOo
      oOO                 X                 OOo
        oO                X               OOo
           oOO            X            OOo
               oOO        X        OOo
                   ooo OOO OOO ooo
*/

/* EIGHTHS
                   ooo OOO OOO ooo
               oOO        X        OOo
           oOO            X            OOo
        oOO               X               OOo
      oOO  X              X              X  OOo
    oOO                   X                   OOo
   oOO          X         X         X          OOo
  oOO                     X                     OOo
 oOO                 X    X    X                 OOo
 oOO                      X                      OOo
 oOOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOOo
 oOO                      X                      OOo
 oOO                 X    X    X                 OOo
  oOO                     X                     OOo
   oOO          X         X         X          OOo
    oOO                   X                   OOo
      oOO  X              X              X  OOo
        oOO               X               OOo
           oOO            X            OOo
               oOO        X        OOo
                   ooo OOO OOO ooo
*/

#endif // TURNS_HPP
