#pragma once

class Unknown {
public:
    Unknown();

    virtual void                AddRef();
    virtual void                Release();
    int                         GetRefCount() const;

    virtual const char          *GetClassName() const   = 0;

protected:
    virtual ~Unknown();

    int                         m_RefCount;

private:
    void                        Init();
};
