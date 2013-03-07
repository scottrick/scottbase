#include "Unknown.h"

#include <cassert>
using namespace std;

Unknown::Unknown() {
	m_RefCount = 1;
}

Unknown::~Unknown() {

}

void Unknown::addRef() {
	assert(m_RefCount > 0);
	m_RefCount++;
}

int Unknown::getRefCount() const {
    return m_RefCount;
}

void Unknown::release() {
	assert(m_RefCount > 0);

	m_RefCount--;
	if (m_RefCount == 0) {  
        //delete this object!
		delete this;
	}
}