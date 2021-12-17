
    # 0x1A. C - Hash tables

# Hash table

hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.


the hash function will assign each key to a unique bucket, but most hash table designs employ an imperfect hash function, which might cause hash collisions where the hash function generates the same index for more than one key. Such collisions are typically accommodated in some way.


          # Hashing

hashing is that the table address of a record can be directly computed from thekey. Hashing implies a function h, when applied to a key k, produces a hash M.
However, since M could be potentially large, the hash result should be mapped to finite entries in the hash table—or slots—several methods can be used to map the keys into the size of hash table N. The most common method is the division method, in which modular arithmetic is used in computing the slot.

 h(k) = M mod N

This is often done in two steps

 Hash == Hash-Function(Key)

   Index == Hash % Hash- Table-Size


              # Hash function


A hash function is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are usually used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.


Hash functions and their associated hash tables are used in data storage and retrieval applications to access data in a small and nearly constant time per retrieval. They require an amount of storage space only fractionally greater than the total space required for the data or records themselves. Hashing is a computationally and storage space-efficient form of data access that avoids the non-linear access time of ordered and unordered lists and structured trees, and theoften exponential storage requirements of direct access of state spaces of large or variable-length keys.

  # Choosing a hash function


A basic requirement is that the function should provide a uniform distribution of hash values. A non-uniform distribution increases the number of collisions and the cost of resolving them. Uniformity is sometimes difficult to ensure by design, but may be evaluated empirically using statistical tests, e.g., a Pearson's chi-squared test for discrete uniform distributions.

open addressing schemes, the hash function should also avoid clustering, the mapping of two or more keys to consecutive slots. Such clustering may cause the lookup cost to skyrocket, even if the load factor is low and collisions are infrequent.


Cryptographic hash functions are believed to provide good hash functions for any table size, either by modulo reduction or by bit masking. They may also be appropriate if there is a risk of malicious users trying to sabotage a network service by submitting requests designed to generate a large number of collisions in the server's hash tables.

