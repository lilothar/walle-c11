#ifndef WALLE_SMART_PTR_ATOMIC_COUNT_H_
#define WALLE_SMART_PTR_ATOMIC_COUNT_H_

namespace walle {
namespace smart_ptr{
	class atomic_count{
		public:	  
			explicit atomic_count( long v ) : _value( v ) {}
			long operator++()    
			{		return __exchange_and_add( &_value, +1 ) + 1;	 }

			long operator--()    
			{		return __exchange_and_add( &_value, -1 ) - 1;	 }

			operator long() const
			{		return __exchange_and_add( &_value, 0 );	}
		private:	 
			atomic_count(atomic_count const &);
			atomic_count & operator=(atomic_count const &);
			mutable long  _value;
		};

}
}
#endif
