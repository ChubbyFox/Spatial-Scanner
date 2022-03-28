#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000020 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000021 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000024 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000027 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000028 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000050 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000051 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000052 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000053 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000054 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000055 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000056 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000057 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000058 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000059 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005A System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000060 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000006F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000071 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000072 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000073 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000074 System.Void System.Linq.Set`1::Resize()
// 0x00000075 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000076 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000077 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000078 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000079 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007A System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007D System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000007E TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000007F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000080 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000081 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000082 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000083 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000084 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000085 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000086 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000088 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000089 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008A System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008B System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008C TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000095 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000097 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000098 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000099 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000009C System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A3 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A4 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A8 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A9 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[170] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[170] = 
{
	5071,
	5071,
	5241,
	5241,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4996,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[58] = 
{
	{ 0x02000004, { 90, 4 } },
	{ 0x02000005, { 94, 9 } },
	{ 0x02000006, { 105, 7 } },
	{ 0x02000007, { 114, 10 } },
	{ 0x02000008, { 126, 11 } },
	{ 0x02000009, { 140, 9 } },
	{ 0x0200000A, { 152, 12 } },
	{ 0x0200000B, { 167, 1 } },
	{ 0x0200000C, { 168, 2 } },
	{ 0x0200000D, { 170, 8 } },
	{ 0x0200000E, { 178, 12 } },
	{ 0x0200000F, { 190, 12 } },
	{ 0x02000010, { 202, 2 } },
	{ 0x02000012, { 204, 8 } },
	{ 0x02000014, { 212, 3 } },
	{ 0x02000015, { 217, 5 } },
	{ 0x02000016, { 222, 7 } },
	{ 0x02000017, { 229, 3 } },
	{ 0x02000018, { 232, 7 } },
	{ 0x02000019, { 239, 4 } },
	{ 0x0200001A, { 243, 23 } },
	{ 0x0200001C, { 266, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 2 } },
	{ 0x0600000D, { 37, 1 } },
	{ 0x0600000E, { 38, 1 } },
	{ 0x0600000F, { 39, 2 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 5 } },
	{ 0x06000014, { 50, 3 } },
	{ 0x06000015, { 53, 2 } },
	{ 0x06000016, { 55, 4 } },
	{ 0x06000017, { 59, 4 } },
	{ 0x06000018, { 63, 4 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 3 } },
	{ 0x0600001B, { 73, 1 } },
	{ 0x0600001C, { 74, 1 } },
	{ 0x0600001D, { 75, 3 } },
	{ 0x0600001E, { 78, 2 } },
	{ 0x0600001F, { 80, 2 } },
	{ 0x06000020, { 82, 5 } },
	{ 0x06000021, { 87, 3 } },
	{ 0x06000032, { 103, 2 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003C, { 124, 2 } },
	{ 0x06000042, { 137, 3 } },
	{ 0x06000047, { 149, 3 } },
	{ 0x0600004C, { 164, 3 } },
	{ 0x06000079, { 215, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[268] = 
{
	{ (Il2CppRGCTXDataType)2, 5620 },
	{ (Il2CppRGCTXDataType)3, 20591 },
	{ (Il2CppRGCTXDataType)2, 8952 },
	{ (Il2CppRGCTXDataType)2, 8395 },
	{ (Il2CppRGCTXDataType)3, 35220 },
	{ (Il2CppRGCTXDataType)2, 6227 },
	{ (Il2CppRGCTXDataType)2, 8418 },
	{ (Il2CppRGCTXDataType)3, 35255 },
	{ (Il2CppRGCTXDataType)2, 8403 },
	{ (Il2CppRGCTXDataType)3, 35232 },
	{ (Il2CppRGCTXDataType)2, 5621 },
	{ (Il2CppRGCTXDataType)3, 20592 },
	{ (Il2CppRGCTXDataType)2, 8978 },
	{ (Il2CppRGCTXDataType)2, 8426 },
	{ (Il2CppRGCTXDataType)3, 35267 },
	{ (Il2CppRGCTXDataType)2, 6252 },
	{ (Il2CppRGCTXDataType)2, 8442 },
	{ (Il2CppRGCTXDataType)3, 35321 },
	{ (Il2CppRGCTXDataType)2, 8434 },
	{ (Il2CppRGCTXDataType)3, 35292 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)2, 3163 },
	{ (Il2CppRGCTXDataType)3, 13079 },
	{ (Il2CppRGCTXDataType)2, 913 },
	{ (Il2CppRGCTXDataType)3, 125 },
	{ (Il2CppRGCTXDataType)3, 126 },
	{ (Il2CppRGCTXDataType)2, 3173 },
	{ (Il2CppRGCTXDataType)3, 13083 },
	{ (Il2CppRGCTXDataType)3, 39220 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)2, 6814 },
	{ (Il2CppRGCTXDataType)3, 27603 },
	{ (Il2CppRGCTXDataType)2, 6815 },
	{ (Il2CppRGCTXDataType)3, 27604 },
	{ (Il2CppRGCTXDataType)3, 17241 },
	{ (Il2CppRGCTXDataType)3, 39249 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)3, 300 },
	{ (Il2CppRGCTXDataType)3, 39179 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)3, 229 },
	{ (Il2CppRGCTXDataType)3, 39210 },
	{ (Il2CppRGCTXDataType)3, 12101 },
	{ (Il2CppRGCTXDataType)2, 2961 },
	{ (Il2CppRGCTXDataType)2, 3586 },
	{ (Il2CppRGCTXDataType)2, 3879 },
	{ (Il2CppRGCTXDataType)2, 4088 },
	{ (Il2CppRGCTXDataType)2, 1195 },
	{ (Il2CppRGCTXDataType)3, 2104 },
	{ (Il2CppRGCTXDataType)3, 2105 },
	{ (Il2CppRGCTXDataType)2, 6228 },
	{ (Il2CppRGCTXDataType)3, 22410 },
	{ (Il2CppRGCTXDataType)2, 4849 },
	{ (Il2CppRGCTXDataType)2, 3379 },
	{ (Il2CppRGCTXDataType)2, 3598 },
	{ (Il2CppRGCTXDataType)2, 3881 },
	{ (Il2CppRGCTXDataType)2, 4850 },
	{ (Il2CppRGCTXDataType)2, 3380 },
	{ (Il2CppRGCTXDataType)2, 3599 },
	{ (Il2CppRGCTXDataType)2, 3882 },
	{ (Il2CppRGCTXDataType)2, 4851 },
	{ (Il2CppRGCTXDataType)2, 3381 },
	{ (Il2CppRGCTXDataType)2, 3600 },
	{ (Il2CppRGCTXDataType)2, 3883 },
	{ (Il2CppRGCTXDataType)2, 3601 },
	{ (Il2CppRGCTXDataType)2, 3884 },
	{ (Il2CppRGCTXDataType)3, 13080 },
	{ (Il2CppRGCTXDataType)2, 4848 },
	{ (Il2CppRGCTXDataType)2, 3597 },
	{ (Il2CppRGCTXDataType)2, 3880 },
	{ (Il2CppRGCTXDataType)2, 2171 },
	{ (Il2CppRGCTXDataType)2, 3581 },
	{ (Il2CppRGCTXDataType)2, 3582 },
	{ (Il2CppRGCTXDataType)2, 3877 },
	{ (Il2CppRGCTXDataType)3, 13078 },
	{ (Il2CppRGCTXDataType)2, 3378 },
	{ (Il2CppRGCTXDataType)2, 3596 },
	{ (Il2CppRGCTXDataType)2, 3377 },
	{ (Il2CppRGCTXDataType)3, 39159 },
	{ (Il2CppRGCTXDataType)3, 12100 },
	{ (Il2CppRGCTXDataType)2, 2960 },
	{ (Il2CppRGCTXDataType)2, 3584 },
	{ (Il2CppRGCTXDataType)2, 3878 },
	{ (Il2CppRGCTXDataType)2, 4087 },
	{ (Il2CppRGCTXDataType)2, 3623 },
	{ (Il2CppRGCTXDataType)2, 3888 },
	{ (Il2CppRGCTXDataType)3, 13229 },
	{ (Il2CppRGCTXDataType)3, 20593 },
	{ (Il2CppRGCTXDataType)3, 20595 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)3, 20594 },
	{ (Il2CppRGCTXDataType)3, 20603 },
	{ (Il2CppRGCTXDataType)2, 5624 },
	{ (Il2CppRGCTXDataType)2, 8404 },
	{ (Il2CppRGCTXDataType)3, 35233 },
	{ (Il2CppRGCTXDataType)3, 20604 },
	{ (Il2CppRGCTXDataType)2, 3676 },
	{ (Il2CppRGCTXDataType)2, 3928 },
	{ (Il2CppRGCTXDataType)3, 13089 },
	{ (Il2CppRGCTXDataType)3, 39141 },
	{ (Il2CppRGCTXDataType)2, 8435 },
	{ (Il2CppRGCTXDataType)3, 35293 },
	{ (Il2CppRGCTXDataType)3, 20596 },
	{ (Il2CppRGCTXDataType)2, 5623 },
	{ (Il2CppRGCTXDataType)2, 8396 },
	{ (Il2CppRGCTXDataType)3, 35221 },
	{ (Il2CppRGCTXDataType)3, 13088 },
	{ (Il2CppRGCTXDataType)3, 20597 },
	{ (Il2CppRGCTXDataType)3, 39140 },
	{ (Il2CppRGCTXDataType)2, 8427 },
	{ (Il2CppRGCTXDataType)3, 35268 },
	{ (Il2CppRGCTXDataType)3, 20610 },
	{ (Il2CppRGCTXDataType)2, 5625 },
	{ (Il2CppRGCTXDataType)2, 8419 },
	{ (Il2CppRGCTXDataType)3, 35256 },
	{ (Il2CppRGCTXDataType)3, 22467 },
	{ (Il2CppRGCTXDataType)3, 10614 },
	{ (Il2CppRGCTXDataType)3, 13090 },
	{ (Il2CppRGCTXDataType)3, 10613 },
	{ (Il2CppRGCTXDataType)3, 20611 },
	{ (Il2CppRGCTXDataType)3, 39142 },
	{ (Il2CppRGCTXDataType)2, 8443 },
	{ (Il2CppRGCTXDataType)3, 35322 },
	{ (Il2CppRGCTXDataType)3, 20624 },
	{ (Il2CppRGCTXDataType)2, 5627 },
	{ (Il2CppRGCTXDataType)2, 8437 },
	{ (Il2CppRGCTXDataType)3, 35295 },
	{ (Il2CppRGCTXDataType)3, 20625 },
	{ (Il2CppRGCTXDataType)2, 3679 },
	{ (Il2CppRGCTXDataType)2, 3931 },
	{ (Il2CppRGCTXDataType)3, 13094 },
	{ (Il2CppRGCTXDataType)3, 13093 },
	{ (Il2CppRGCTXDataType)2, 8406 },
	{ (Il2CppRGCTXDataType)3, 35235 },
	{ (Il2CppRGCTXDataType)3, 39147 },
	{ (Il2CppRGCTXDataType)2, 8436 },
	{ (Il2CppRGCTXDataType)3, 35294 },
	{ (Il2CppRGCTXDataType)3, 20617 },
	{ (Il2CppRGCTXDataType)2, 5626 },
	{ (Il2CppRGCTXDataType)2, 8429 },
	{ (Il2CppRGCTXDataType)3, 35270 },
	{ (Il2CppRGCTXDataType)3, 13092 },
	{ (Il2CppRGCTXDataType)3, 13091 },
	{ (Il2CppRGCTXDataType)3, 20618 },
	{ (Il2CppRGCTXDataType)2, 8405 },
	{ (Il2CppRGCTXDataType)3, 35234 },
	{ (Il2CppRGCTXDataType)3, 39146 },
	{ (Il2CppRGCTXDataType)2, 8428 },
	{ (Il2CppRGCTXDataType)3, 35269 },
	{ (Il2CppRGCTXDataType)3, 20631 },
	{ (Il2CppRGCTXDataType)2, 5628 },
	{ (Il2CppRGCTXDataType)2, 8445 },
	{ (Il2CppRGCTXDataType)3, 35324 },
	{ (Il2CppRGCTXDataType)3, 22468 },
	{ (Il2CppRGCTXDataType)3, 10616 },
	{ (Il2CppRGCTXDataType)3, 13096 },
	{ (Il2CppRGCTXDataType)3, 13095 },
	{ (Il2CppRGCTXDataType)3, 10615 },
	{ (Il2CppRGCTXDataType)3, 20632 },
	{ (Il2CppRGCTXDataType)2, 8407 },
	{ (Il2CppRGCTXDataType)3, 35236 },
	{ (Il2CppRGCTXDataType)3, 39148 },
	{ (Il2CppRGCTXDataType)2, 8444 },
	{ (Il2CppRGCTXDataType)3, 35323 },
	{ (Il2CppRGCTXDataType)3, 13086 },
	{ (Il2CppRGCTXDataType)3, 13087 },
	{ (Il2CppRGCTXDataType)3, 13097 },
	{ (Il2CppRGCTXDataType)3, 279 },
	{ (Il2CppRGCTXDataType)2, 3668 },
	{ (Il2CppRGCTXDataType)2, 3922 },
	{ (Il2CppRGCTXDataType)3, 281 },
	{ (Il2CppRGCTXDataType)2, 650 },
	{ (Il2CppRGCTXDataType)2, 954 },
	{ (Il2CppRGCTXDataType)3, 278 },
	{ (Il2CppRGCTXDataType)3, 280 },
	{ (Il2CppRGCTXDataType)3, 302 },
	{ (Il2CppRGCTXDataType)3, 303 },
	{ (Il2CppRGCTXDataType)2, 7723 },
	{ (Il2CppRGCTXDataType)3, 31939 },
	{ (Il2CppRGCTXDataType)2, 3671 },
	{ (Il2CppRGCTXDataType)2, 3924 },
	{ (Il2CppRGCTXDataType)3, 31940 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)2, 652 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)3, 301 },
	{ (Il2CppRGCTXDataType)3, 304 },
	{ (Il2CppRGCTXDataType)3, 231 },
	{ (Il2CppRGCTXDataType)2, 7721 },
	{ (Il2CppRGCTXDataType)3, 31936 },
	{ (Il2CppRGCTXDataType)2, 3665 },
	{ (Il2CppRGCTXDataType)2, 3920 },
	{ (Il2CppRGCTXDataType)3, 31937 },
	{ (Il2CppRGCTXDataType)3, 31938 },
	{ (Il2CppRGCTXDataType)3, 233 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)3, 230 },
	{ (Il2CppRGCTXDataType)3, 232 },
	{ (Il2CppRGCTXDataType)2, 8992 },
	{ (Il2CppRGCTXDataType)2, 2172 },
	{ (Il2CppRGCTXDataType)3, 12139 },
	{ (Il2CppRGCTXDataType)2, 2976 },
	{ (Il2CppRGCTXDataType)2, 9346 },
	{ (Il2CppRGCTXDataType)3, 31933 },
	{ (Il2CppRGCTXDataType)3, 31934 },
	{ (Il2CppRGCTXDataType)2, 4103 },
	{ (Il2CppRGCTXDataType)3, 31935 },
	{ (Il2CppRGCTXDataType)2, 567 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)3, 151 },
	{ (Il2CppRGCTXDataType)3, 27578 },
	{ (Il2CppRGCTXDataType)2, 6816 },
	{ (Il2CppRGCTXDataType)3, 27605 },
	{ (Il2CppRGCTXDataType)2, 1196 },
	{ (Il2CppRGCTXDataType)3, 2106 },
	{ (Il2CppRGCTXDataType)3, 27584 },
	{ (Il2CppRGCTXDataType)3, 10562 },
	{ (Il2CppRGCTXDataType)2, 678 },
	{ (Il2CppRGCTXDataType)3, 27579 },
	{ (Il2CppRGCTXDataType)2, 6811 },
	{ (Il2CppRGCTXDataType)3, 2527 },
	{ (Il2CppRGCTXDataType)2, 1217 },
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 10580 },
	{ (Il2CppRGCTXDataType)3, 27580 },
	{ (Il2CppRGCTXDataType)3, 10557 },
	{ (Il2CppRGCTXDataType)3, 10558 },
	{ (Il2CppRGCTXDataType)3, 10556 },
	{ (Il2CppRGCTXDataType)3, 10559 },
	{ (Il2CppRGCTXDataType)2, 2333 },
	{ (Il2CppRGCTXDataType)2, 9042 },
	{ (Il2CppRGCTXDataType)3, 13085 },
	{ (Il2CppRGCTXDataType)3, 10561 },
	{ (Il2CppRGCTXDataType)2, 3518 },
	{ (Il2CppRGCTXDataType)3, 10560 },
	{ (Il2CppRGCTXDataType)2, 3384 },
	{ (Il2CppRGCTXDataType)2, 8985 },
	{ (Il2CppRGCTXDataType)2, 3625 },
	{ (Il2CppRGCTXDataType)2, 3889 },
	{ (Il2CppRGCTXDataType)3, 12120 },
	{ (Il2CppRGCTXDataType)2, 2970 },
	{ (Il2CppRGCTXDataType)3, 13804 },
	{ (Il2CppRGCTXDataType)3, 13805 },
	{ (Il2CppRGCTXDataType)3, 13810 },
	{ (Il2CppRGCTXDataType)2, 4098 },
	{ (Il2CppRGCTXDataType)3, 13807 },
	{ (Il2CppRGCTXDataType)3, 39942 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)3, 10607 },
	{ (Il2CppRGCTXDataType)1, 3511 },
	{ (Il2CppRGCTXDataType)2, 8998 },
	{ (Il2CppRGCTXDataType)3, 13806 },
	{ (Il2CppRGCTXDataType)1, 8998 },
	{ (Il2CppRGCTXDataType)1, 4098 },
	{ (Il2CppRGCTXDataType)2, 9344 },
	{ (Il2CppRGCTXDataType)2, 8998 },
	{ (Il2CppRGCTXDataType)2, 3632 },
	{ (Il2CppRGCTXDataType)2, 3894 },
	{ (Il2CppRGCTXDataType)3, 13811 },
	{ (Il2CppRGCTXDataType)3, 13809 },
	{ (Il2CppRGCTXDataType)3, 13808 },
	{ (Il2CppRGCTXDataType)2, 468 },
	{ (Il2CppRGCTXDataType)3, 10617 },
	{ (Il2CppRGCTXDataType)2, 663 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	170,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	58,
	s_rgctxIndices,
	268,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
