#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include "../Headers/main.h"

link* getHardcoded(savesFile save)
{
	/*link* hardcodeHead = NULL;
	if (save.storedElements == _STRUCT)
	{
		link
			* outSidePtr = newLink("readChain/NAME", _STRUCT, true);
		hardcodeHead = NAME;

		//Initialization
		STRUCT STRUCTVALUE =
		{
			.PROPERTY = VALUE
		};

		//Chaining
		//NAME -> nextLinkPtr = ...

		//Pass values
		LINKPTR->elementPtr->ELEMENT = STRUCTVALUE;

		//Setting Ids
		setLinkId(LINKPTR, 1);
	}
	else if (save.storedElements == ...)
	{
	}*/

	return NULL;// hardcodeHead;
}

link* ommitHardcoded(link* chain, savesFile save)
{
	int i;
	for (i = 0; i < hardcodedMaxId; i++)
		chain = deleteLink(chain, i);
	return chain;
}