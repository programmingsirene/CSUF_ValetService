#include <iostream>
#include<ostream>
#include <string>
#include<fstream>

#include "Automobile.hpp"



/*******************************************************************************
** Member function definitions
*******************************************************************************/
Automobile::Automobile( const std::string & color,
                        const std::string & brand,
                        const std::string & model,
                        const std::string & plateNumber )
  : color_(color), brand_(brand), model_(model), plateNumber_(plateNumber)
{}



/*******************************************************************************
** Non-member function definitions
*******************************************************************************/

std::ostream & operator<<( std::ostream& stream, const Automobile& vehicle )
{
  /// To be completed:
  ///   Insert the vehicle's color, brand, model, and license plate number into
  // the stream, then return the stream

  	stream << vehicle.color_;
  	stream << "Make =" << vehicle.brand_;
    stream << vehicle.model_;
    stream << vehicle.plateNumber_;

    return stream;

}
