
int32_t db_store_i64(account_name scope, table_name table, account_name payer, uint64_t id,  const void* data, uint32_t len) {
   return database_api(ctx()).db_store_i64(scope, table, payer, id,  array_ptr<const char>((const char*)data), len);
}

void db_update_i64(int32_t iterator, account_name payer, const void* data, uint32_t len) {
   database_api(ctx()).db_update_i64(iterator, payer, array_ptr<const char>((const char*)data), len);
}

void db_remove_i64(int32_t iterator) {
   database_api(ctx()).db_remove_i64(iterator);
}

int32_t db_get_i64(int32_t iterator, const void* data, uint32_t len) {
   return database_api(ctx()).db_get_i64(iterator, array_ptr<char>((char*)data), len);
}

int32_t db_get_i64_ex( int itr, uint64_t* primary, char* buffer, size_t buffer_size ) {
   return ctx().db_get_i64_ex( itr, *primary, buffer, buffer_size );
}

const char* db_get_i64_exex( int itr, size_t* buffer_size ) {
   return ctx().db_get_i64_exex( itr,  buffer_size);
}

int32_t db_next_i64(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_next_i64(iterator, *primary);
}

int32_t db_previous_i64(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_previous_i64(iterator, *primary);
}

int32_t db_find_i64(account_name code, account_name scope, table_name table, uint64_t id) {
   return database_api(ctx()).db_find_i64(code, scope, table, id);
}

int32_t db_lowerbound_i64(account_name code, account_name scope, table_name table, uint64_t id) {
   return database_api(ctx()).db_lowerbound_i64(code, scope, table, id);
}

int32_t db_upperbound_i64(account_name code, account_name scope, table_name table, uint64_t id) {
   return database_api(ctx()).db_upperbound_i64(code, scope, table, id);
}

int32_t db_end_i64(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_end_i64(code, scope, table);
}

int32_t db_idx64_store(account_name scope, table_name table, account_name payer, uint64_t id, const uint64_t* secondary) {
   return database_api(ctx()).db_idx64_store(scope, table, payer, id, *secondary);
}

void db_idx64_update(int32_t iterator, account_name payer, const uint64_t* secondary) {
   return database_api(ctx()).db_idx64_update(iterator, payer, *secondary);
}

void db_idx64_remove(int32_t iterator) {
   return database_api(ctx()).db_idx64_remove(iterator);
}

int32_t db_idx64_next(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx64_next(iterator, *primary);
}

int32_t db_idx64_previous(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx64_previous(iterator, *primary);
}

int32_t db_idx64_find_primary(account_name code, account_name scope, table_name table, uint64_t* secondary, uint64_t primary) {
   return database_api(ctx()).db_idx64_find_primary(code, scope, table, *secondary, primary);
}

int32_t db_idx64_find_secondary(account_name code, account_name scope, table_name table, const uint64_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx64_find_secondary(code, scope, table, *secondary, *primary);
}

int32_t db_idx64_lowerbound(account_name code, account_name scope, table_name table, uint64_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx64_lowerbound(code, scope, table, *secondary, *primary);
}

int32_t db_idx64_upperbound(account_name code, account_name scope, table_name table, uint64_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx64_upperbound(code, scope, table, *secondary, *primary);
}

int32_t db_idx64_end(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_idx64_end(code, scope, table);
}

int32_t db_idx128_store(account_name scope, table_name table, account_name payer, uint64_t id, const uint128_t* secondary) {
   return database_api(ctx()).db_idx128_store(scope, table, payer, id, *secondary);
}

void db_idx128_update(int32_t iterator, account_name payer, const uint128_t* secondary) {
   return database_api(ctx()).db_idx128_update(iterator, payer, *secondary);
}

void db_idx128_remove(int32_t iterator) {
   return database_api(ctx()).db_idx128_remove(iterator);
}

int32_t db_idx128_next(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx128_next(iterator, *primary);
}

int32_t db_idx128_previous(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx128_previous(iterator, *primary);
}

int32_t db_idx128_find_primary(account_name code, account_name scope, table_name table, uint128_t* secondary, uint64_t primary) {
   return database_api(ctx()).db_idx128_find_primary(code, scope, table,*secondary, primary);
}

int32_t db_idx128_find_secondary(account_name code, account_name scope, table_name table, const uint128_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx128_find_secondary(code, scope, table, *secondary, *primary);
}

int32_t db_idx128_lowerbound(account_name code, account_name scope, table_name table, uint128_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx128_lowerbound(code, scope, table, *secondary, *primary);
}

int32_t db_idx128_upperbound(account_name code, account_name scope, table_name table, uint128_t* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx128_upperbound(code, scope, table, *secondary, *primary) ;
}

int32_t db_idx128_end(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_idx128_end(code, scope, table);
}

int32_t db_idx256_store(account_name scope, table_name table, account_name payer, uint64_t id, const void* data, uint32_t data_len ) {
   return database_api(ctx()).db_idx256_store(scope, table, payer, id, array_ptr<const uint128_t>((const uint128_t*)data), data_len);
}

void db_idx256_update(int32_t iterator, account_name payer, const void* data, uint32_t data_len) {
   database_api(ctx()).db_idx256_update(iterator, payer, array_ptr<const uint128_t>((uint128_t*)data), data_len);
}

void db_idx256_remove(int32_t iterator) {
   database_api(ctx()).db_idx256_remove(iterator);
}

int32_t db_idx256_next(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx256_next(iterator, *primary);
}

int32_t db_idx256_previous(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx256_previous(iterator, *primary);
}

int32_t db_idx256_find_primary(account_name code, account_name scope, table_name table, void* data, uint32_t data_len, uint64_t primary) {
   return database_api(ctx()).db_idx256_find_primary(code, scope, table, array_ptr<uint128_t>((uint128_t*)data), data_len, primary);
}

int32_t db_idx256_find_secondary(account_name code, account_name scope, table_name table, const void* data, uint32_t data_len, uint64_t* primary) {
   return database_api(ctx()).db_idx256_find_secondary(code, scope, table, array_ptr<const uint128_t>((uint128_t*)data), data_len, *primary);
}

int32_t db_idx256_lowerbound(account_name code, account_name scope, table_name table, void* data, uint32_t data_len, uint64_t* primary) {
   return database_api(ctx()).db_idx256_upperbound(code, scope, table, array_ptr<uint128_t>((uint128_t*)data), data_len, *primary);
}

int32_t db_idx256_upperbound(account_name code, account_name scope, table_name table, void* data, uint32_t data_len, uint64_t* primary) {
   return database_api(ctx()).db_idx256_upperbound(code, scope, table, array_ptr<uint128_t>((uint128_t*)data), data_len, *primary);
}

int32_t db_idx256_end(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_idx256_end(code, scope, table);
}

int32_t db_idx_double_store(account_name scope, table_name table, account_name payer, uint64_t id, const double* secondary) {
   return database_api(ctx()).db_idx_double_store(scope, table, payer, id, *(float64_t*)secondary) ;
}

void db_idx_double_update(int32_t iterator, account_name payer, const double* secondary) {
   database_api(ctx()).db_idx_double_update(iterator, payer, *(float64_t*)secondary);
}

void db_idx_double_remove(int32_t iterator) {
   database_api(ctx()).db_idx_double_remove(iterator);
}

int32_t db_idx_double_next(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx_double_next(iterator, *primary);
}

int32_t db_idx_double_previous(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx_double_previous(iterator, *primary);
}

int32_t db_idx_double_find_primary(account_name code, account_name scope, table_name table, double* secondary, uint64_t primary) {
   return database_api(ctx()).db_idx_double_find_primary(code, scope, table, *(float64_t*)secondary, primary);
}

int32_t db_idx_double_find_secondary(account_name code, account_name scope, table_name table, const double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_double_find_secondary(code, scope, table, *(float64_t*)secondary, *primary);
}

int32_t db_idx_double_lowerbound(account_name code, account_name scope, table_name table, double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_double_lowerbound(code, scope, table, *(float64_t*)secondary, *primary);
}

int32_t db_idx_double_upperbound(account_name code, account_name scope, table_name table, double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_double_upperbound(code, scope, table, *(float64_t*)secondary, *primary);
}

int32_t db_idx_double_end(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_idx_double_end(code, scope, table);
}

int32_t db_idx_long_double_store(account_name scope, table_name table, account_name payer, uint64_t id, const long double* secondary) {
   return database_api(ctx()).db_idx_long_double_store(scope, table, payer, id, *(float128_t*)secondary);
}

void db_idx_long_double_update(int32_t iterator, account_name payer, const long double* secondary) {
   database_api(ctx()).db_idx_long_double_update(iterator, payer, *(float128_t*)secondary);
}

void db_idx_long_double_remove(int32_t iterator) {
   database_api(ctx()).db_idx_long_double_remove(iterator);
}

int32_t db_idx_long_double_next(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx_long_double_next(iterator, *primary);
}

int32_t db_idx_long_double_previous(int32_t iterator, uint64_t* primary) {
   return database_api(ctx()).db_idx_long_double_previous(iterator, *primary);
}

int32_t db_idx_long_double_find_primary(account_name code, account_name scope, table_name table, long double* secondary, uint64_t primary) {
   return database_api(ctx()).db_idx_long_double_find_primary(code, scope, table, *(float128_t*)secondary, primary);
}

int32_t db_idx_long_double_find_secondary(account_name code, account_name scope, table_name table, const long double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_long_double_find_secondary(code, scope, table, *(const float128_t*)secondary, *primary);
}

int32_t db_idx_long_double_lowerbound(account_name code, account_name scope, table_name table, long double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_long_double_lowerbound(code, scope, table, *(float128_t*)secondary, *primary);
}

int32_t db_idx_long_double_upperbound(account_name code, account_name scope, table_name table, long double* secondary, uint64_t* primary) {
   return database_api(ctx()).db_idx_long_double_upperbound(code, scope, table, *(float128_t*)secondary, *primary);
}

int32_t db_idx_long_double_end(account_name code, account_name scope, table_name table) {
   return database_api(ctx()).db_idx_long_double_end(code, scope, table);
}
