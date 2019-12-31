## vector中resize和reserve的区别

#### resize(n)

调整容器的长度大小，使其能容纳n个元素。
如果n小于容器的当前的size，则删除多出来的元素。
否则，采用值初始化的方式添加元素。

#### resize(n,t)

将所添加的元素用t来初始化

#### reserve(n)

预分配n个元素的存储空间

#### capacity与size的区别

size是指容器当前拥有的元素个数，而capacity指容器在重新分配新存储空间之前可以存储的元素个数。



resize调整的是size，reserve调整的是capacity。