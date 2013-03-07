#pragma once

class Unknown {
public:
    Unknown();

    virtual void                addRef();
    virtual void                release();
    int                         getRefCount() const;

    virtual const char          *getClassName() const   = 0;

protected:
    virtual ~Unknown();

    int                         m_RefCount;

private:

};
