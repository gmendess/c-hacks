#ifndef _STRING_H_
#define _STRING_H_

#include <stdbool.h>

// syntax sugar para 'struct string_private_members*'
typedef struct string_public_members*object; 

// struct que contém os membros privados da classe string
typedef struct string_private_members {
  size_t size;
  char*  buffer;
} StringPrivateMembers;


// struct que contém os memebros públicos da classe string
typedef struct string_public_members {

  // setters e getters
  size_t (*get_size)(object this);
  void (*set_string)(object this, const char* new_buffer);
  const char* const (*get_string)(object this);

  // métodos utilitários
  char (*at)(object this, const int index);

} StringPublicMembers;


// struct que contém o contrutor e destrutor da classe string
typedef struct class_string {
  object (*new)(void);
  void* (*delete)(object this);
} class_string;


#endif // _STRING_H_