#ifndef WALLE_SMART_PTR_H_
#define WALLE_SMART_PTR_H_

#if __cplusplus >= 201100L
    #include <memory>
    #include <functional>
    #include <walle/smart_ptr/scoped_ptr.h>
    #include <walle/smart_ptr/any.h>
    namespace std {
      using std::placeholders::_1;
        using std::placeholders::_2;
        using std::placeholders::_3;
        using std::placeholders::_4;
        using std::placeholders::_5;
    }
#else
    #include <tr1/memory>
    #include <tr1/functional>
    #include <walle/smart_ptr/any.h>
    #include <walle/smart_ptr/scoped_ptr.h>
    namespace std {
        using std::tr1::shared_ptr;
        using std::tr1::weak_ptr;
        using std::tr1::enable_shared_from_this;
        using std::tr1::function;
        using std::tr1::bind;
        using std::tr1::placeholders::_1;
        using std::tr1::placeholders::_2;
        using std::tr1::placeholders::_3;
        using std::tr1::placeholders::_4;
        using std::tr1::placeholders::_5;
        
    }
   
#endif

#endif
