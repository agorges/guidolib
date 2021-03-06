#ifndef ARBreathMark_H
#define ARBreathMark_H

/*
  GUIDO Library
  Copyright (C) 2004  Grame

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Grame Research Laboratory, 11, cours de Verdun Gensoul 69002 Lyon - France
  research@grame.fr

*/

#include "ARMTParameter.h"

/*@mkdoc

@group:Articulations

@tagname:\breathMark
@tagalias:
@tagtype:P
@tagnotation:a breath mark
@tagdesc
See the [Articulations](@EXAMPLES/articulations/) example.<br />
See the [Lutkin](@EXAMPLES/lutkin/) example.
@tagend

*/

/** \brief not yet documented
*/
class ARBreathMark : public ARMTParameter
{
	public:
					 ARBreathMark() {}
		virtual 	~ARBreathMark() {}

		virtual const char*	getParamsStr() const	{ return ""; };
		virtual const char*	getTagName() const		{ return "ARBreathMark"; };
		virtual std::string getGMNName() const		{ return "\\breathMark"; };
};

#endif
