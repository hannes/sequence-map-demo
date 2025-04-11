#define DUCKDB_EXTENSION_MAIN

#include "sequence_map_extension.hpp"
#include "duckdb.hpp"
#include "duckdb/common/exception.hpp"
#include "duckdb/common/string_util.hpp"
#include "duckdb/function/scalar_function.hpp"
#include "duckdb/main/extension_util.hpp"
#include "duckdb/parser/parsed_data/create_scalar_function_info.hpp"
#include "duckdb/common/vector_operations/generic_executor.hpp"

namespace duckdb {

/* C++ code produced by gperf version 3.0.3 */
/* Command-line:
 * /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf
 * -L C++ /Users/hannes/Desktop/benchling-codes.txt  */
/* Computed positions: -k'1-3' */

#if !(                                                                         \
    (' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) && ('%' == 37) && \
    ('&' == 38) && ('\'' == 39) && ('(' == 40) && (')' == 41) &&               \
    ('*' == 42) && ('+' == 43) && (',' == 44) && ('-' == 45) && ('.' == 46) && \
    ('/' == 47) && ('0' == 48) && ('1' == 49) && ('2' == 50) && ('3' == 51) && \
    ('4' == 52) && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) && \
    ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) && ('=' == 61) && \
    ('>' == 62) && ('?' == 63) && ('A' == 65) && ('B' == 66) && ('C' == 67) && \
    ('D' == 68) && ('E' == 69) && ('F' == 70) && ('G' == 71) && ('H' == 72) && \
    ('I' == 73) && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) && \
    ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) && ('R' == 82) && \
    ('S' == 83) && ('T' == 84) && ('U' == 85) && ('V' == 86) && ('W' == 87) && \
    ('X' == 88) && ('Y' == 89) && ('Z' == 90) && ('[' == 91) &&                \
    ('\\' == 92) && (']' == 93) && ('^' == 94) && ('_' == 95) &&               \
    ('a' == 97) && ('b' == 98) && ('c' == 99) && ('d' == 100) &&               \
    ('e' == 101) && ('f' == 102) && ('g' == 103) && ('h' == 104) &&            \
    ('i' == 105) && ('j' == 106) && ('k' == 107) && ('l' == 108) &&            \
    ('m' == 109) && ('n' == 110) && ('o' == 111) && ('p' == 112) &&            \
    ('q' == 113) && ('r' == 114) && ('s' == 115) && ('t' == 116) &&            \
    ('u' == 117) && ('v' == 118) && ('w' == 119) && ('x' == 120) &&            \
    ('y' == 121) && ('z' == 122) && ('{' == 123) && ('|' == 124) &&            \
    ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error                                                                         \
    "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#define TOTAL_KEYWORDS 64
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 7
#define MAX_HASH_VALUE 180
/* maximum key range = 174, duplicates = 0 */

class Perfect_Hash {
public:
  static inline unsigned int hash(const char *str, unsigned int len);

public:
  static const char *in_word_set(const char *str, unsigned int len);
};

inline unsigned int Perfect_Hash::hash(const char *str, unsigned int len) {
  static unsigned char asso_values[] = {
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 4,   127, 10,  90,  2,   181, 40,  45,  5,   181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 25,  0,   0,   181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181, 181,
      181, 181, 181};
  return len + asso_values[(unsigned char)str[2] + 1] +
         asso_values[(unsigned char)str[1] + 2] +
         asso_values[(unsigned char)str[0]];
}

const char *Perfect_Hash::in_word_set(const char *str, unsigned int len) {
  static const char *wordlist[] = {
      "",    "", "",    "",    "",    "",    "",    "ATT", "",    "ACT",
      "",    "", "AGT", "CTT", "",    "CCT", "",    "AAT", "CGT", "",
      "",    "", "",    "CAT", "",    "",    "",    "",    "TTT", "",
      "TCT", "", "",    "TGT", "",    "",    "",    "",    "TAT", "",
      "",    "", "",    "GTT", "",    "GCT", "",    "",    "GGT", "",
      "",    "", "ATG", "GAT", "ACG", "",    "",    "AGG", "CTG", "",
      "CCG", "", "AAG", "CGG", "",    "",    "",    "",    "CAG", "",
      "",    "", "",    "TTG", "",    "TCG", "",    "",    "TGG", "",
      "",    "", "",    "TAG", "",    "",    "",    "",    "GTG", "",
      "GCG", "", "",    "GGG", "",    "",    "",    "ATC", "GAG", "ACC",
      "",    "", "AGC", "CTC", "",    "CCC", "",    "AAC", "CGC", "",
      "",    "", "",    "CAC", "",    "",    "",    "",    "TTC", "",
      "TCC", "", "",    "TGC", "",    "",    "",    "",    "TAC", "",
      "",    "", "",    "GTC", "ATA", "GCC", "ACA", "",    "GGC", "AGA",
      "CTA", "", "CCA", "GAC", "AAA", "CGA", "",    "",    "",    "",
      "CAA", "", "",    "",    "",    "TTA", "",    "TCA", "",    "",
      "TGA", "", "",    "",    "",    "TAA", "",    "",    "",    "",
      "GTA", "", "GCA", "",    "",    "GGA", "",    "",    "",    "",
      "GAA"};

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH) {
    unsigned int key = hash(str, len);

    if (key <= MAX_HASH_VALUE) {
      const char *s = wordlist[key];

      if (*str == *s && !strcmp(str + 1, s + 1))
        return s;
    }
  }
  return 0;
}

static char sequence_map_lookup_table[1024];

inline void SequenceMapScalarFun(DataChunk &args, ExpressionState &state,
                                 Vector &result) {

  UnaryExecutor::Execute<string_t, string_t>(
      args.data[0], result, args.size(), [&](string_t in) {
        auto res = StringVector::EmptyString(result, in.GetSize() / 3);
        auto res_ptr = res.GetDataWriteable();
        auto in_ptr = in.GetDataUnsafe();

        for (idx_t i = 0; i < in.GetSize() / 3; i++) {
          auto hash = Perfect_Hash::hash(in_ptr + i * 3, 3);
          if (hash > MAX_HASH_VALUE) {
            throw InvalidInputException("Non-Hashable Input");
          }
          res_ptr[i] = sequence_map_lookup_table[hash];
        }
        return res;
      });
}

using PHRED_MAP_ENTRY_TYPE =
    StructTypeBinary<PrimitiveType<int64_t>, PrimitiveType<int64_t>>;
using PHRED_LIST_TYPE = GenericListType<PHRED_MAP_ENTRY_TYPE>;

inline void PhredScoresBucketedFunction(DataChunk &args, ExpressionState &state,
                                        Vector &result) {
  // TODO we only need to create the vector once, then we can update
  GenericExecutor::ExecuteUnary<PrimitiveType<string_t>, PHRED_LIST_TYPE>(
      args.data[0], result, args.size(), [&](PrimitiveType<string_t> input) {
        PHRED_LIST_TYPE res;
        // TODO cache the vector;
        // TODO bucketing here?
        for (idx_t str_idx = 0; str_idx < input.val.GetSize(); ++str_idx) {
          PHRED_MAP_ENTRY_TYPE entry;
          entry.a_val.val = str_idx;
          auto in_char = input.val.GetDataUnsafe()[str_idx];
          auto val = toascii(in_char) - 33;
          entry.b_val.val = 100; // how do we handle invalid phred entries?

          if (val >= 0 && val <= 40) {
            entry.b_val.val = val;
          }

          res.values.push_back(entry);
        }
        return res;
      });
}

static void LoadInternal(DatabaseInstance &instance) {
  // Register a scalar function

  static vector<pair<string, char>> entries = {
      {"TTT", 'F'}, {"TTC", 'F'}, {"TTA", 'L'}, {"TTG", 'L'}, {"TCT", 'S'},
      {"TCC", 'S'}, {"TCA", 'S'}, {"TCG", 'S'}, {"TAT", 'Y'}, {"TAC", 'Y'},
      {"TGT", 'C'}, {"TGC", 'C'}, {"TGG", 'W'}, {"CTT", 'L'}, {"CTC", 'L'},
      {"CTA", 'L'}, {"CTG", 'L'}, {"CCT", 'P'}, {"CCC", 'P'}, {"CCA", 'P'},
      {"CCG", 'P'}, {"CAT", 'H'}, {"CAC", 'H'}, {"CAA", 'Q'}, {"CAG", 'Q'},
      {"CGT", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'}, {"ATT", 'I'},
      {"ATC", 'I'}, {"ATA", 'I'}, {"ATG", 'M'}, {"ACT", 'T'}, {"ACC", 'T'},
      {"ACA", 'T'}, {"ACG", 'T'}, {"AAT", 'N'}, {"AAC", 'N'}, {"AAA", 'K'},
      {"AAG", 'K'}, {"AGT", 'S'}, {"AGC", 'S'}, {"AGA", 'R'}, {"AGG", 'R'},
      {"GTT", 'V'}, {"GTC", 'V'}, {"GTA", 'V'}, {"GTG", 'V'}, {"GCT", 'A'},
      {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'}, {"GAT", 'D'}, {"GAC", 'D'},
      {"GAA", 'E'}, {"GAG", 'E'}, {"GGT", 'G'}, {"GGC", 'G'}, {"GGA", 'G'},
      {"GGG", 'G'}, {"TAG", '*'}, {"TAA", '*'}, {"TGA", '*'}};

  for (auto &entry : entries) {
    auto hash = Perfect_Hash::hash(entry.first.c_str(), entry.first.size());
    D_ASSERT(hash != 0);
    sequence_map_lookup_table[hash] = entry.second;
  }

  auto sequence_map_scalar_function =
      ScalarFunction("sequence_map", {LogicalType::VARCHAR},
                     LogicalType::VARCHAR, SequenceMapScalarFun);
  ExtensionUtil::RegisterFunction(instance, sequence_map_scalar_function);

  auto phred_scores_bucketed_scalar_function = ScalarFunction(
      "phred_scores", {LogicalType::VARCHAR},
      LogicalType::LIST(LogicalType::STRUCT(
          {{"index", LogicalType::BIGINT}, {"phred", LogicalType::BIGINT}})),
      PhredScoresBucketedFunction);
  ExtensionUtil::RegisterFunction(instance,
                                  phred_scores_bucketed_scalar_function);
}

void SequenceMapExtension::Load(DuckDB &db) { LoadInternal(*db.instance); }
std::string SequenceMapExtension::Name() { return "sequence_map"; }

std::string SequenceMapExtension::Version() const {
#ifdef EXT_VERSION_SEQUENCE_MAP
  return EXT_VERSION_SEQUENCE_MAP;
#else
  return "";
#endif
}

} // namespace duckdb

extern "C" {

DUCKDB_EXTENSION_API void sequence_map_init(duckdb::DatabaseInstance &db) {
  duckdb::DuckDB db_wrapper(db);
  db_wrapper.LoadExtension<duckdb::SequenceMapExtension>();
}

DUCKDB_EXTENSION_API const char *sequence_map_version() {
  return duckdb::DuckDB::LibraryVersion();
}
}

#ifndef DUCKDB_EXTENSION_MAIN
#error DUCKDB_EXTENSION_MAIN not defined
#endif
