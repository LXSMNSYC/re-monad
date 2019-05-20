let from = option =>
  switch (option) {
    | Some(item) => Some(item)
    | None => None
  }
;

let map = (mapper, option) =>
  switch (option) {
    | Some(item) => Some(mapper(item))
    | None => None
  }
;

let filter = (predicate, option) =>
  switch (option) {
    | Some(item) => (predicate(item) ? Some(item) : None)
    | None => None
  }
;

let flatMap = (mapper, option) => 
  switch (option) {
    | Some(item) => mapper(item)
    | None => None
  }
;

let defaultIfEmpty = (default, option) => 
  switch (option) {
    | Some(item) => Some(item)
    | None => Some(default)
  }
;

let getOrElse = (default, option) => 
  switch (option) {
    | Some(item) => item
    | None => default
  }
;

let isPresent = (option) => 
  switch (option) {
    | Some(_) => true
    | None => false
  }
;

let ifPresent = (consumer, option) => 
  switch (option) {
    | Some(item) => consumer(item)
    | None => ()
  }
;

let equals = (a, b) =>
  switch (a) {
    | Some(ia) => switch (b) {
      | Some(ib) => ia == ib
      | None => false
    }
    | None => switch (b) {
      | Some(_) => false
      | None => true
    }
  }
;

let cmp = (a, b, comparer) =>
  switch (a) {
    | Some(ia) => switch (b) {
      | Some(ib) => comparer(ia, ib)
      | None => false
    }
    | None => switch (b) {
      | Some(_) => false
      | None => false
    }
  }
;