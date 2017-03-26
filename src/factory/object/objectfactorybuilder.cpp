/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see http://www.gnu.org/licenses/.
*/
/*
 * objectfactorybuilder.cpp
 *
 *  Created on: 07.10.2013
 *      Author: chris
 */

#include "objectfactorybuilder.h"

namespace factory
{

template Factory< object::Object< double >, ArgumentTypeObject<double> >* BuildObjectFactory( Factory< ::state::Dgl_state, ArgumentTypeState > * stateFactory );

} /* namespace factory */
