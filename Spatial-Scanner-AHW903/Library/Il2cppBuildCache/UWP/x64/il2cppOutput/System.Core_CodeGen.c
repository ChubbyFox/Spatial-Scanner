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
	5054,
	5054,
	5224,
	5224,
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
	4980,
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
	{ (Il2CppRGCTXDataType)2, 5600 },
	{ (Il2CppRGCTXDataType)3, 20522 },
	{ (Il2CppRGCTXDataType)2, 8918 },
	{ (Il2CppRGCTXDataType)2, 8365 },
	{ (Il2CppRGCTXDataType)3, 35067 },
	{ (Il2CppRGCTXDataType)2, 6207 },
	{ (Il2CppRGCTXDataType)2, 8387 },
	{ (Il2CppRGCTXDataType)3, 35094 },
	{ (Il2CppRGCTXDataType)2, 8373 },
	{ (Il2CppRGCTXDataType)3, 35078 },
	{ (Il2CppRGCTXDataType)2, 5601 },
	{ (Il2CppRGCTXDataType)3, 20523 },
	{ (Il2CppRGCTXDataType)2, 8944 },
	{ (Il2CppRGCTXDataType)2, 8395 },
	{ (Il2CppRGCTXDataType)3, 35105 },
	{ (Il2CppRGCTXDataType)2, 6232 },
	{ (Il2CppRGCTXDataType)2, 8409 },
	{ (Il2CppRGCTXDataType)3, 35135 },
	{ (Il2CppRGCTXDataType)2, 8402 },
	{ (Il2CppRGCTXDataType)3, 35119 },
	{ (Il2CppRGCTXDataType)2, 912 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)2, 3159 },
	{ (Il2CppRGCTXDataType)3, 13021 },
	{ (Il2CppRGCTXDataType)2, 913 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)2, 3169 },
	{ (Il2CppRGCTXDataType)3, 13025 },
	{ (Il2CppRGCTXDataType)3, 38997 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)2, 6787 },
	{ (Il2CppRGCTXDataType)3, 27454 },
	{ (Il2CppRGCTXDataType)2, 6788 },
	{ (Il2CppRGCTXDataType)3, 27455 },
	{ (Il2CppRGCTXDataType)3, 17174 },
	{ (Il2CppRGCTXDataType)3, 39025 },
	{ (Il2CppRGCTXDataType)2, 956 },
	{ (Il2CppRGCTXDataType)3, 290 },
	{ (Il2CppRGCTXDataType)3, 38958 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)3, 38987 },
	{ (Il2CppRGCTXDataType)3, 12043 },
	{ (Il2CppRGCTXDataType)2, 2957 },
	{ (Il2CppRGCTXDataType)2, 3580 },
	{ (Il2CppRGCTXDataType)2, 3869 },
	{ (Il2CppRGCTXDataType)2, 4075 },
	{ (Il2CppRGCTXDataType)2, 1195 },
	{ (Il2CppRGCTXDataType)3, 2076 },
	{ (Il2CppRGCTXDataType)3, 2077 },
	{ (Il2CppRGCTXDataType)2, 6208 },
	{ (Il2CppRGCTXDataType)3, 22341 },
	{ (Il2CppRGCTXDataType)2, 4833 },
	{ (Il2CppRGCTXDataType)2, 3373 },
	{ (Il2CppRGCTXDataType)2, 3592 },
	{ (Il2CppRGCTXDataType)2, 3871 },
	{ (Il2CppRGCTXDataType)2, 4834 },
	{ (Il2CppRGCTXDataType)2, 3374 },
	{ (Il2CppRGCTXDataType)2, 3593 },
	{ (Il2CppRGCTXDataType)2, 3872 },
	{ (Il2CppRGCTXDataType)2, 4835 },
	{ (Il2CppRGCTXDataType)2, 3375 },
	{ (Il2CppRGCTXDataType)2, 3594 },
	{ (Il2CppRGCTXDataType)2, 3873 },
	{ (Il2CppRGCTXDataType)2, 3595 },
	{ (Il2CppRGCTXDataType)2, 3874 },
	{ (Il2CppRGCTXDataType)3, 13022 },
	{ (Il2CppRGCTXDataType)2, 4832 },
	{ (Il2CppRGCTXDataType)2, 3591 },
	{ (Il2CppRGCTXDataType)2, 3870 },
	{ (Il2CppRGCTXDataType)2, 2171 },
	{ (Il2CppRGCTXDataType)2, 3575 },
	{ (Il2CppRGCTXDataType)2, 3576 },
	{ (Il2CppRGCTXDataType)2, 3867 },
	{ (Il2CppRGCTXDataType)3, 13020 },
	{ (Il2CppRGCTXDataType)2, 3372 },
	{ (Il2CppRGCTXDataType)2, 3590 },
	{ (Il2CppRGCTXDataType)2, 3371 },
	{ (Il2CppRGCTXDataType)3, 38938 },
	{ (Il2CppRGCTXDataType)3, 12042 },
	{ (Il2CppRGCTXDataType)2, 2956 },
	{ (Il2CppRGCTXDataType)2, 3578 },
	{ (Il2CppRGCTXDataType)2, 3868 },
	{ (Il2CppRGCTXDataType)2, 4074 },
	{ (Il2CppRGCTXDataType)2, 3617 },
	{ (Il2CppRGCTXDataType)2, 3878 },
	{ (Il2CppRGCTXDataType)3, 13162 },
	{ (Il2CppRGCTXDataType)3, 20524 },
	{ (Il2CppRGCTXDataType)3, 20526 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)3, 20525 },
	{ (Il2CppRGCTXDataType)3, 20534 },
	{ (Il2CppRGCTXDataType)2, 5604 },
	{ (Il2CppRGCTXDataType)2, 8374 },
	{ (Il2CppRGCTXDataType)3, 35079 },
	{ (Il2CppRGCTXDataType)3, 20535 },
	{ (Il2CppRGCTXDataType)2, 3670 },
	{ (Il2CppRGCTXDataType)2, 3918 },
	{ (Il2CppRGCTXDataType)3, 13031 },
	{ (Il2CppRGCTXDataType)3, 38925 },
	{ (Il2CppRGCTXDataType)2, 8403 },
	{ (Il2CppRGCTXDataType)3, 35120 },
	{ (Il2CppRGCTXDataType)3, 20527 },
	{ (Il2CppRGCTXDataType)2, 5603 },
	{ (Il2CppRGCTXDataType)2, 8366 },
	{ (Il2CppRGCTXDataType)3, 35068 },
	{ (Il2CppRGCTXDataType)3, 13030 },
	{ (Il2CppRGCTXDataType)3, 20528 },
	{ (Il2CppRGCTXDataType)3, 38924 },
	{ (Il2CppRGCTXDataType)2, 8396 },
	{ (Il2CppRGCTXDataType)3, 35106 },
	{ (Il2CppRGCTXDataType)3, 20541 },
	{ (Il2CppRGCTXDataType)2, 5605 },
	{ (Il2CppRGCTXDataType)2, 8388 },
	{ (Il2CppRGCTXDataType)3, 35095 },
	{ (Il2CppRGCTXDataType)3, 22398 },
	{ (Il2CppRGCTXDataType)3, 10572 },
	{ (Il2CppRGCTXDataType)3, 13032 },
	{ (Il2CppRGCTXDataType)3, 10571 },
	{ (Il2CppRGCTXDataType)3, 20542 },
	{ (Il2CppRGCTXDataType)3, 38926 },
	{ (Il2CppRGCTXDataType)2, 8410 },
	{ (Il2CppRGCTXDataType)3, 35136 },
	{ (Il2CppRGCTXDataType)3, 20555 },
	{ (Il2CppRGCTXDataType)2, 5607 },
	{ (Il2CppRGCTXDataType)2, 8405 },
	{ (Il2CppRGCTXDataType)3, 35122 },
	{ (Il2CppRGCTXDataType)3, 20556 },
	{ (Il2CppRGCTXDataType)2, 3673 },
	{ (Il2CppRGCTXDataType)2, 3921 },
	{ (Il2CppRGCTXDataType)3, 13036 },
	{ (Il2CppRGCTXDataType)3, 13035 },
	{ (Il2CppRGCTXDataType)2, 8376 },
	{ (Il2CppRGCTXDataType)3, 35081 },
	{ (Il2CppRGCTXDataType)3, 38930 },
	{ (Il2CppRGCTXDataType)2, 8404 },
	{ (Il2CppRGCTXDataType)3, 35121 },
	{ (Il2CppRGCTXDataType)3, 20548 },
	{ (Il2CppRGCTXDataType)2, 5606 },
	{ (Il2CppRGCTXDataType)2, 8398 },
	{ (Il2CppRGCTXDataType)3, 35108 },
	{ (Il2CppRGCTXDataType)3, 13034 },
	{ (Il2CppRGCTXDataType)3, 13033 },
	{ (Il2CppRGCTXDataType)3, 20549 },
	{ (Il2CppRGCTXDataType)2, 8375 },
	{ (Il2CppRGCTXDataType)3, 35080 },
	{ (Il2CppRGCTXDataType)3, 38929 },
	{ (Il2CppRGCTXDataType)2, 8397 },
	{ (Il2CppRGCTXDataType)3, 35107 },
	{ (Il2CppRGCTXDataType)3, 20562 },
	{ (Il2CppRGCTXDataType)2, 5608 },
	{ (Il2CppRGCTXDataType)2, 8412 },
	{ (Il2CppRGCTXDataType)3, 35138 },
	{ (Il2CppRGCTXDataType)3, 22399 },
	{ (Il2CppRGCTXDataType)3, 10574 },
	{ (Il2CppRGCTXDataType)3, 13038 },
	{ (Il2CppRGCTXDataType)3, 13037 },
	{ (Il2CppRGCTXDataType)3, 10573 },
	{ (Il2CppRGCTXDataType)3, 20563 },
	{ (Il2CppRGCTXDataType)2, 8377 },
	{ (Il2CppRGCTXDataType)3, 35082 },
	{ (Il2CppRGCTXDataType)3, 38931 },
	{ (Il2CppRGCTXDataType)2, 8411 },
	{ (Il2CppRGCTXDataType)3, 35137 },
	{ (Il2CppRGCTXDataType)3, 13028 },
	{ (Il2CppRGCTXDataType)3, 13029 },
	{ (Il2CppRGCTXDataType)3, 13039 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)2, 3662 },
	{ (Il2CppRGCTXDataType)2, 3912 },
	{ (Il2CppRGCTXDataType)3, 271 },
	{ (Il2CppRGCTXDataType)2, 650 },
	{ (Il2CppRGCTXDataType)2, 954 },
	{ (Il2CppRGCTXDataType)3, 268 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)3, 292 },
	{ (Il2CppRGCTXDataType)3, 293 },
	{ (Il2CppRGCTXDataType)2, 7693 },
	{ (Il2CppRGCTXDataType)3, 31786 },
	{ (Il2CppRGCTXDataType)2, 3665 },
	{ (Il2CppRGCTXDataType)2, 3914 },
	{ (Il2CppRGCTXDataType)3, 31787 },
	{ (Il2CppRGCTXDataType)3, 295 },
	{ (Il2CppRGCTXDataType)2, 652 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)3, 291 },
	{ (Il2CppRGCTXDataType)3, 294 },
	{ (Il2CppRGCTXDataType)3, 221 },
	{ (Il2CppRGCTXDataType)2, 7691 },
	{ (Il2CppRGCTXDataType)3, 31783 },
	{ (Il2CppRGCTXDataType)2, 3659 },
	{ (Il2CppRGCTXDataType)2, 3910 },
	{ (Il2CppRGCTXDataType)3, 31784 },
	{ (Il2CppRGCTXDataType)3, 31785 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)3, 220 },
	{ (Il2CppRGCTXDataType)3, 222 },
	{ (Il2CppRGCTXDataType)2, 8958 },
	{ (Il2CppRGCTXDataType)2, 2172 },
	{ (Il2CppRGCTXDataType)3, 12081 },
	{ (Il2CppRGCTXDataType)2, 2972 },
	{ (Il2CppRGCTXDataType)2, 9312 },
	{ (Il2CppRGCTXDataType)3, 31780 },
	{ (Il2CppRGCTXDataType)3, 31781 },
	{ (Il2CppRGCTXDataType)2, 4090 },
	{ (Il2CppRGCTXDataType)3, 31782 },
	{ (Il2CppRGCTXDataType)2, 567 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)3, 141 },
	{ (Il2CppRGCTXDataType)3, 27429 },
	{ (Il2CppRGCTXDataType)2, 6789 },
	{ (Il2CppRGCTXDataType)3, 27456 },
	{ (Il2CppRGCTXDataType)2, 1196 },
	{ (Il2CppRGCTXDataType)3, 2078 },
	{ (Il2CppRGCTXDataType)3, 27435 },
	{ (Il2CppRGCTXDataType)3, 10520 },
	{ (Il2CppRGCTXDataType)2, 678 },
	{ (Il2CppRGCTXDataType)3, 27430 },
	{ (Il2CppRGCTXDataType)2, 6784 },
	{ (Il2CppRGCTXDataType)3, 2497 },
	{ (Il2CppRGCTXDataType)2, 1217 },
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 10538 },
	{ (Il2CppRGCTXDataType)3, 27431 },
	{ (Il2CppRGCTXDataType)3, 10515 },
	{ (Il2CppRGCTXDataType)3, 10516 },
	{ (Il2CppRGCTXDataType)3, 10514 },
	{ (Il2CppRGCTXDataType)3, 10517 },
	{ (Il2CppRGCTXDataType)2, 2333 },
	{ (Il2CppRGCTXDataType)2, 9008 },
	{ (Il2CppRGCTXDataType)3, 13027 },
	{ (Il2CppRGCTXDataType)3, 10519 },
	{ (Il2CppRGCTXDataType)2, 3512 },
	{ (Il2CppRGCTXDataType)3, 10518 },
	{ (Il2CppRGCTXDataType)2, 3378 },
	{ (Il2CppRGCTXDataType)2, 8951 },
	{ (Il2CppRGCTXDataType)2, 3619 },
	{ (Il2CppRGCTXDataType)2, 3879 },
	{ (Il2CppRGCTXDataType)3, 12062 },
	{ (Il2CppRGCTXDataType)2, 2966 },
	{ (Il2CppRGCTXDataType)3, 13737 },
	{ (Il2CppRGCTXDataType)3, 13738 },
	{ (Il2CppRGCTXDataType)3, 13743 },
	{ (Il2CppRGCTXDataType)2, 4085 },
	{ (Il2CppRGCTXDataType)3, 13740 },
	{ (Il2CppRGCTXDataType)3, 39718 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)3, 10565 },
	{ (Il2CppRGCTXDataType)1, 3505 },
	{ (Il2CppRGCTXDataType)2, 8964 },
	{ (Il2CppRGCTXDataType)3, 13739 },
	{ (Il2CppRGCTXDataType)1, 8964 },
	{ (Il2CppRGCTXDataType)1, 4085 },
	{ (Il2CppRGCTXDataType)2, 9310 },
	{ (Il2CppRGCTXDataType)2, 8964 },
	{ (Il2CppRGCTXDataType)2, 3626 },
	{ (Il2CppRGCTXDataType)2, 3884 },
	{ (Il2CppRGCTXDataType)3, 13744 },
	{ (Il2CppRGCTXDataType)3, 13742 },
	{ (Il2CppRGCTXDataType)3, 13741 },
	{ (Il2CppRGCTXDataType)2, 468 },
	{ (Il2CppRGCTXDataType)3, 10575 },
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
