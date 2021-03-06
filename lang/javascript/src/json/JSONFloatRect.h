#ifndef JSONFLOATRECT_H
#define JSONFLOATRECT_H
/*
  GUIDO Library
  Copyright (C) 2014	Grame

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Grame Research Laboratory, 11, cours de Verdun Gensoul 69002 Lyon - France
  research@grame.fr

*/

#include "TRect.h"
#include <string>
#include "json_object.h"

/*!
 * \addtogroup jsonMapping
 *  @{
 */
/*!
 * \brief The JSONFloatRect class is used to work in json environnement.
 *
 * This class has capability to convert the corresponding json_object to C++ object and the C++ object to JSON string or json_object.<br/>
 * The JSON representation of a FloatRect has the four elements of FloatRect class.<br/>
 * Example of JSON representation :<br/>
 * <code>{"left": 80, "top": 0, "right": 122, "bottom": 451 }</code>
 */
class JSONFloatRect : public FloatRect
{
	public:
		/*!
		 * \brief JSONFloatRect
		 */
		JSONFloatRect();
		/*!
		 * \brief JSONFloatRect construct a JSONFloatRect object from json object
		 * \param object a json_object
		 */
		JSONFloatRect(const json::json_object &object);

		/*!
		 * \brief JSONFloatRect Construct a JSONFloatRect from a standard FloatRect.
		 * \param rect
		 */
		JSONFloatRect(const FloatRect &rect);

		virtual ~JSONFloatRect();

		/*!
		 * \brief toString convert in json string
		 * \return a json string
		 */
		std::string toString();

		/*!
		 * \brief toJsonObject convert in json_object
		 * It's user responsability to delete the object.
		 * \return a json_object
		 */
		json::json_object * toJsonObject();
};
/*! @} */
#endif // JSONFLOATRECT_H
