#include "CompositeHouseTree.h"

void CompositeHouseTree::Draw() const {
	for (auto c : children) {
		c->Draw();
	}
}

uint16_t CompositeHouseTree::GetScore() const {
	uint16_t total = 0;
	for (auto c : children) {
		total += c->GetScore();
	}
	return total;
}

bool __fastcall CompositeHouseTree::isInside(double x1, double x2) const {
	for (auto c : children) {
		if (c->isInside(x1,x2)) {
			return true;
		}
	}
	return false;
}

void CompositeHouseTree::AddChild(CompositeHouse* child) {
	children.push_back(child);
}

