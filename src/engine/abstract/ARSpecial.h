#ifndef ARSpecial_H
#define ARSpecial_H
/*
  GUIDO Library
  Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz
  Copyright (C) 2002-2017 Grame

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Grame Research Laboratory, 11, cours de Verdun Gensoul 69002 Lyon - France
  research@grame.fr

*/

#include "ARMTParameter.h"

/** \brief not yet documented
*/
class ARSpecial :  public ARMTParameter
{
	public:
				 ARSpecial();
		virtual ~ARSpecial() {}

		virtual void setTagParameters (const TagParameterMap& params);

		virtual const char*	getParamsStr() const	{ return kARSpecialParams; };
		virtual const char*	getTagName() const		{ return "ARSpecial"; };
		virtual std::string getGMNName() const		{ return "\\special"; };

    	unsigned char getDrawChar() const { return mDrawChar; }

	protected:
		unsigned char mDrawChar; // may become int...

	private:
		unsigned char string2char (const char* str) const;
};

#endif
