#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_MAP_SIZE 100

int hash(int key);

typedef struct {
  int key;
  int value;
} Entry;

typedef struct {
  Entry **bucket;
} HashMap;

HashMap *createHashMap() {
  HashMap *hm = malloc(sizeof(HashMap));
  hm->bucket = calloc(HASH_MAP_SIZE, sizeof(Entry *));
  return hm;
}

void add(HashMap *hm, int key, int value) {
  int index = hash(key);
  Entry *entry = malloc(sizeof(Entry));
  entry->key = key;
  entry->value = value;

  hm->bucket[index] = entry;
}

int hash(int key) { return key % HASH_MAP_SIZE; }

int get(HashMap *hm, int key) { // Get the value associated with the key
  int index = hash(key);
  return hm->bucket[index]->value;
}

void destroyHashMap(HashMap *hm) { // Not properly deallocating mem
  for (int i = 0; i < HASH_MAP_SIZE; i++) {
    free(hm->bucket[i]);
    if (hm->bucket[i] == NULL) {
      printf("Freed: %i\n", i);
    } else {
      printf("Free Error:(\n");
    }
  }
  free(hm->bucket);
  free(hm);
  if (hm->bucket == NULL) {
    printf("hm->bucket empty\n");
  } else {
    printf("hm bucket freeing error\n");
  }
  if (hm == NULL) {
    printf("hm empty\n");
  } else {
    printf("hm freeing error\n");
  }
}

int main() {
  HashMap *hm = createHashMap();
  add(hm, 0, 10);
  printf("%i\n", get(hm, 0));
  add(hm, 1, 5);
  printf("%i\n", get(hm, 0));
  printf("%i\n", get(hm, 1));
  destroyHashMap(hm);
  return 0;
}
