function SearchBox({ seachchange }) {
    return (
        <div className="pa2">
            <input
                className="pa3 ba b--green bg-lightest-blue"
                type="search"
                placeholder="Search your Class Mates"
                onChange={seachchange}
            />
        </div>
    );
}

export default SearchBox;
