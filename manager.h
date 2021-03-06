#pragma once
#include "index.h"
#include <filesystem>
class IndexerManager {
public:
	IndexerManager(const std::filesystem::path& path) :path_(path) {}

	enum class Recursive {
		Recursive,
		NonRecursive
	};

	void Process(Recursive rec);

	void PrintConsole() const;

	void WriteFile();

	bool Exist()const;

	void Find(const std::string& search_word) const ;

	void Read(const std::filesystem::path& path);
private:
	std::filesystem::path path_;
	std::vector<Indexer> indexer_data;
};