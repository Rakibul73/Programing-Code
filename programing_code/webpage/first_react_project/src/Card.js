function Card({ id, name, email }) {
    return (
        <div className="tc bg-dark-green dib br2 pa0 ma2 grow bw2 shadow-5 ">
            <img
                src={`https://robohash.org/${id}?100x100`}
                alt="{props.username}"
            />

            <div>
                <h2>{name}</h2>
                <p>{email}</p>
            </div>
        </div>
    );
}

export default Card;
